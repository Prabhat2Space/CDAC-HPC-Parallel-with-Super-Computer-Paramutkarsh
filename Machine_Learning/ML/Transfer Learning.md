# Transfer Learning Function Summary

| **Create a Network**        | **Function**            | **Description**                                 |
|-----------------------------|-------------------------|-------------------------------------------------|
|                             | `deepNetworkDesigner`   | Launch Deep Network Designer                    |
|                             | `googlenet`             | Load pretrained "GoogLeNet" network             |
|                             | `supported networks`    | View list of available pretrained networks      |
|                             | `fullyConnectedLayer`   | Create new fully connected network layer        |
|                             | `classificationLayer`   | Create new output layer for classification network|

| **Get Training Images**     | **Function**            | **Description**                                 |
|-----------------------------|-------------------------|-------------------------------------------------|
|                             | `imageDatastore`        | Create datastore reference to image files       |
|                             | `augmentedImageDatastore`| Preprocess collection of image files            |
|                             | `splitEachLabel`        | Divide datastore into multiple datastores       |

| **Set Training Algorithm Options** | **Function**   | **Description**                           |
|------------------------------------|----------------|-------------------------------------------|
|                                    | `trainingOptions`| Create variable containing training algorithm options |

| **Perform Training**              | **Function**    | **Description**                           |
|-----------------------------------|-----------------|-------------------------------------------|
|                                   | `trainNetwork`  | Perform Training                          |

| **Use Trained Network to Perform Classifications** | **Function** | **Description**                              |
|----------------------------------------------------|--------------|----------------------------------------------|
|                                                    | `classify`   | Obtain trained network classifications of input images |

| **Evaluate Trained Network**       | **Function**    | **Description**                           |
|------------------------------------|-----------------|-------------------------------------------|
|                                    | `nnz`           | Count nonzero elements in array           |
|                                    | `confusionchart`| Calculate confusion matrix                |
