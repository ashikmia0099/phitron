# Generated by Django 4.2.6 on 2023-12-24 11:47

from django.db import migrations, models
import django.db.models.deletion


class Migration(migrations.Migration):

    initial = True

    dependencies = [
        ('task_model', '0001_initial'),
    ]

    operations = [
        migrations.CreateModel(
            name='CatagoryMadel',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('catagory', models.CharField(max_length=30)),
                ('TaskTitle', models.ForeignKey(on_delete=django.db.models.deletion.CASCADE, to='task_model.modeltask')),
            ],
        ),
    ]