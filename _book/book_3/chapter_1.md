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



#### Exercises

1. > How would you define Machine Learning?

2. > Can you name four type problems where it shines?

3. > What is a labeled training set?

4. > What are two most common supervised tasks?

5. > Can you name four common unsupervised tasks?

6. > What type of Machine Learning algorithm would you use to allow a robot to walk in various terrains?

7. > What type of algorithm would you used to segment your customers into multiple groups?

8. > Would you frame the problem of spam detection as supervised learning problem or an unsupervised learning problem?

9. > What is an online learning system

10. > What is out-of-core learning?

11. > What type of learning algorithm relies on similarity measure to make predictions

12. > What is the difference between a model parameter and learning algorithm's hyperparameter?

13. > What do model-based learning algorithms search for? What is the most common strategy they use to succeed? How do they make predictions?

14. > Can you name four main challenges in Machine Learning?

15. > If your model performs great on the training data but generalizes poorly to new instances, what is happening? can you name three possible solutions?

16. > What is a test set, and why would you want to use it?

17. > What is the purpose of a validation set?

18. > What is the train-dev set, when do you need it, and how do you use it?

19. > What can go wrong if you tune hyperparameters using the test set?

