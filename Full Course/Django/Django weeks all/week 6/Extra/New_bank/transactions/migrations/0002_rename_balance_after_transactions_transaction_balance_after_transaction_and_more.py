# Generated by Django 4.2.6 on 2024-01-09 07:52

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('transactions', '0001_initial'),
    ]

    operations = [
        migrations.RenameField(
            model_name='transaction',
            old_name='balance_after_transactions',
            new_name='balance_after_transaction',
        ),
        migrations.RenameField(
            model_name='transaction',
            old_name='account_type',
            new_name='transaction_type',
        ),
    ]
