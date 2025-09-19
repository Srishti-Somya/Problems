# Write your MySQL query statement below
Select patient_id, patient_name, conditions from patients where conditions like 'DIAB1%' or conditions like '% DIAB1%';