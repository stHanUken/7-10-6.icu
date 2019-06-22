# 7-10-6.icu
## Introduction
To complain about studying stress and pressure in China's middle school, I created this repository.
It is just a way for me to get less stressed, don't take it seriously in the way of \"996.icu\".
I wish to resist the amount of homework, hoping as many as possible people to see it.
~~As students, we can't update very quickly.~~
## What is 7-10-6?
Just like so-called \"996\", 7-10-6 means studying from 7 a.m. to 10 p.m., from Monday to Saturday.
Though we have the strongest bodies, we still cannot survive a long-term super stressful studying period.
Study by 7-10-6, sick in ICU.
## Why 7-10-6?
Schools especially in developing districts have far more stress on entering a higher school.
As a result, school leaders and teachers push us hard to get into a good higher school.
However, we top students cannot bear the stress along with much homework, so we are against it.
### Relaxing period
Our team members have just passed the Senior High School Entrance Exam.
Now we have two and a quarter months to rest.
## What the repository is?
This repository is a school-managing simulator. You can add some useful features to it.
## Sample
```
class Class {
private:
	Grade Level;
	int Class_Grade;
	int Class_Number;
	Student* List[MAX_STUDENT_NUMBER];
	int Total_Students;
public:
	void init(Grade grade, int _grade, int number);
	bool Add_Student(Student & newer);
	bool Remove_Student(int index);
	bool Remove_Student(std::string name);
	void List_All_Students(void);
	void List_Class_Properties(void);
	friend class School;
};
```
## Join us
If you want to communicate with us, please send an e-mail to 1416759930@qq.com.
I wish more and more China's high school students can join us.
### Credits
- stHanUken