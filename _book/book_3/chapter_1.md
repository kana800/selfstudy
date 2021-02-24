#### Notes

Machine learning is the *ability to learn without being programmed*

##### Types of Machine Learning Systems

>  There are so many different types of machine learning systems that it is useful to classify them in broad categories, based on the following criteria
>
> - Whether or not they are trained with human supervision
>   - supervised
>   - unsupervised
>   - semi-supervised
>   - Reinforcement Learning
> - Whether or not they can learn incrementally on the fly
>   - Online learning 
>   - Batch learning
> - Whether they work by simply comparing new data points to known data points, or instead by detecting patterns in the training data and building a predictive model/
>   - Instance-Based
>   - Model-Based

###### Supervised/Unsupervised Learning

**Supervised** Learning, we are given a data set and already know what our correct output should look like, having the idea that there is a relationship between the input and the output. Supervised learning problems can be classified *regression* and *classification*. 

*Regression* problem, we are trying to predict results within a continuous output.

*Classification* problem, we are trying to predict results in a discrete output.

Discrete data can only take certain values and Continuous data can take any value. Discrete data is counted, Continuous data is measured.

**Unsupervised** Learning, we have no idea what our results should look like. Uncovering hidden patterns and structures from unlabeled data. The system tries to learn without a teacher.

**Uses**:

> Visualization algorithms are also good examples of unsupervised learning algorithms. *you can feed them a lot of complex and unlabeled data*, and they output a 2D or 3D data representation.

>  Unsupervised Learning can be used for *anomaly detection*, for example, detecting unusual credit card transactions to prevent fraud, catching manufacturing defects, or automatically removing outliers from a dataset before feeding it to another learning algorithm

> Another task is called *novelty detection*, it aims to detect new instances that look different from all instances in the training set

> Another task is called *association rule learning*, in which goal is to dig into large amounts of data and discover interesting relations between attributes. For example, suppose you own a supermarket. Running association rule on you sales log may reveal that people who purchase barbecue sauce and potato also tend to buy steak.

###### Semi-Supervised learning

> Labeling data is usually time-consuming and costly, you will often have plenty of unlabeled instances, and few labeled instances. Some algorithms can deal with data that's partially labeled. This is called semi-supervised learning.

> Google photos, is a good example. Once you upload all your family photos to the service, it automatically recognizes that the same person `A` shows up in photos `1`, `5`  and `11`, while another person `B` shows up in different photos. *This is the unsupervised part of the algorithm (clustering)* . Then we can add labels to make sure the system knows which person is whom.

###### Reinforcement Learning

> In reinforcement learning, the learning system called agent, can observe the environment, select and perform actions, and get rewards in return (*penalties in the form of negative rewards*). It must then learn by itself what is the best strategy, called a policy, to get the most reward over time. A policy defines what action the agent should choose when it is in a given situation.

##### Batch and Online Learning

> Batch learning is incapable of learning incrementally. The system is trained (typically offline) and then launched into production and runs without learning anymore. This is called *offiine learning*. 
>
> If you want to the system to learn about new data types then we need to train the system again and replace the newer one with the older one, this task can be automated but the training process might take  a long time.

> Online learning the you train the system by feeding it data instances sequentially, either individually or in small groups called *mini-batches*
>
> Online learning is great for systems that receive data as a continuous flow and need to adapt to change rapidly or autonomously. If your data sets cannot fit dataset into machine memory we can use online learning this specific process is called *out-of-core* learning.
>
> Rate of the learning process is an important parameter for online learning, if there is a higher rate the older data will be quickly forgotten and if we have slower learning rate, the system will have more inertia but it will less sensitive to noise in the new data or to sequences of non representative data points (outliers).
>
> If bad data is fed to the system, the systems performance will gradually decline.

##### Instance-Based versus Model-Based Learning

> In instance-based learning, the system learns examples by heart, then generalizes to new cases by using a similarity measure to compare them to learned examples.

Example : *similarity of measure*  between two emails, could be the number of words they have in common.

> In model based learning, the *set of examples* are used to build models and then use that model to make predictions. 

##### Main Challenges of Machine Learning

- Insufficient quantity of training data 

- Non representative Training Data - Make sure that the training data is representative of  new cases you want to generalize to. If we are training a model to identify the life satisfaction with the GDP and we didn't use data from countries of lower GDP, we wont be able to accurately predict the life satisfaction of countries with lower GDP. 

  >  If the sample is too small, you will have a sampling noise, but even very large samples can be non representative if the sampling method is flawed. This is called *sampling bias*.

- Poor-Quality Data - If your training data is full of errors, outliers and noise it will make it harder for the system detect patterns.

- Irrelevant Features - Selection of features is called *feature selection*, *feature extraction* - combining existing features to produce a more useful one. 

- Over fitting the Training Data - Overgeneralizing in machine learning is called as overfitting. Complex models like deep neural networks can detect subtle patterns in the data and if the *training data* is too noisy, or if its too small (*sampling noise*), algorithm will likely to detect patterns in the noise.

  > constraining a model to make it simpler and reduce the risk of over fitting is called *regularization*. The amount of regularization to apply during learning can be controlled by a *hyper-parameter*. A *hyper-parameter* is a *parameter* of a learning algorithm (not of the model). The hyper-parameter are set to a certain value and remains constant during training. Tuning hyper-parameters is an important part in machine learning.  

- Under fitting the Training Data - opposite of overfitting caused because model is too simple to learn underlying structure of the data.

#### Exercises

1. > How would you define Machine Learning?

   *Machine Learning* ability learn from given data.

2. > Can you name four type problems where it shines?

   Any problem that we can solve using an *algorithmic solution*. 

   Problem 1:  Can build robots to work hazardous environment

   Problem 2:  Replace Menial Jobs

   Problem 3: Finding Relationships between given sets of data

   Problem 4: Can be used in the medical field 

3. > What is a labeled training set?

   Training set that contains the solution for each instance.

4. > What are two most common supervised tasks?

   Regression and Classification

5. > Can you name four common unsupervised tasks?

   Visualization, clustering, Association Rule Learning and Dimensionality Reduction

6. > What type of Machine Learning algorithm would you use to allow a robot to walk in various terrains?

   Reinforcement learning

7. > What type of algorithm would you used to segment your customers into multiple groups?

   Unsupervised Learning (Clustering)

8. > Would you frame the problem of spam detection as supervised learning problem or an unsupervised learning problem?

   spam detection is supervised learning because we know what our output (target) should look like.

9. > What is an online learning system ?

   Online learning, you train the system by feeding it data instances sequentially, either individually or in small groups called *mini-batches*.

10. > What is an out-of-core learning?

    When the data is too big to handled by the computer memory, we can chop the data into data chunks (mini batches) and feed it sequentially to the system (online learning system).

11. > What type of learning algorithm relies on similarity measure to make predictions?

    Instance-Based Learning system

12. > What is the difference between a model parameter and learning algorithm's hyperparameter?

    Hyperparameter is a variable of algorithm, model parameters are *variables* that will be used to detect new instance.

13. >  What do model-based learning algorithms search for? What is the most common strategy they use to succeed? How do they make predictions?

    Model-based learning algorithms search for an optimal *theta* value for the model parameters and then we use a cost function that measures how bad the system is making predictions on the training data and optimize theta value accordingly.

14. > Can you name four main challenges in Machine Learning?

    - Poor Data quality
    - Lack of Data
    - Underfitting the training data due to a simple model
    - Overfitting the training data due to a complex model

15. > If your model performs great on the training data but generalizes poorly to new instances, what is happening? can you name three possible solutions?

    Problem is **overfitting of training data**. We can simplify the model (make it less complex )or reduce the noise in the sample, reduce the number of parameters used in the model.

16. > What is a test set, and why would you want to use it?

    We use test set to find the generalization error that model will make in new instances

17. > What is the purpose of a validation set?

    Used to select the best model and tune hyperparameters.

18. > What is the train-dev set, when do you need it, and how do you use it?

    To find whether data is overfitting or in a mismatch we can use train-dev set, to exactly know what is really affecting the performance of the model (*validation set*) we can use the *train-dev set* which holds some training pictures, then we can train the system on the training data set and use the *train-dev* set for the evaluation. If model perform poorly on validation set the problem would be data mismatch, if the model perform poorly on train-dev set then it a overfitting of the training data.  

19. > What can go wrong if you tune hyperparameters using the test set?

    You can overfit you data.
