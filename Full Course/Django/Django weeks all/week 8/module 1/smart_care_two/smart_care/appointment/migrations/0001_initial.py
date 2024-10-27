# Generated by Django 4.2.11 on 2024-08-17 10:37

from django.db import migrations, models
import django.db.models.deletion


class Migration(migrations.Migration):

    initial = True

    dependencies = [
        ('patient', '0001_initial'),
        ('doctor', '0001_initial'),
    ]

    operations = [
        migrations.CreateModel(
            name='Appointment',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('appointment_type', models.CharField(choices=[('offline', 'offline'), ('online', 'online')], max_length=10)),
                ('appointment_status', models.CharField(choices=[('Completed', 'Completed'), ('Pending', 'Pending'), ('Running', 'Running')], max_length=10)),
                ('symptom', models.TextField()),
                ('cancel', models.BooleanField(default=False)),
                ('doctor', models.ForeignKey(on_delete=django.db.models.deletion.CASCADE, to='doctor.doctor')),
                ('patient', models.ForeignKey(on_delete=django.db.models.deletion.CASCADE, to='patient.patient')),
                ('time', models.ForeignKey(on_delete=django.db.models.deletion.CASCADE, to='doctor.availabletime')),
            ],
        ),
    ]
