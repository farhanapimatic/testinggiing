//
//  SwaggerPetstore
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ).
//
#import <Foundation/Foundation.h>
#import "Configuration.h"
#import "APIHelper.h"
#import "APIError.h"
#import "BaseController.h"
#import "UnirestClient.h"
#import "HttpContext.h"
#import "NSDate+extension.h"
#import "Pet.h"
#import "Status2Enum.h"
#import "Status2EnumHelper.h"
#import "ApiResponse.h"

@interface PetController : BaseController

/**
* Completion block definition for asynchronous call to addPet */
typedef void (^CompletedPostAddPet)(BOOL success, HttpContext* context, NSError* error);

/**
* Add a new pet to the store
* @param    body    Required parameter: Pet object that needs to be added to the store
*/
- (void) addPetAsyncWithBody:(Pet*) body
                completionBlock:(CompletedPostAddPet) onCompleted;

/**
* Completion block definition for asynchronous call to updatePet */
typedef void (^CompletedPutUpdatePet)(BOOL success, HttpContext* context, NSError* error);

/**
* Update an existing pet
* @param    body    Required parameter: Pet object that needs to be added to the store
*/
- (void) updatePetAsyncWithBody:(Pet*) body
                completionBlock:(CompletedPutUpdatePet) onCompleted;

/**
* Completion block definition for asynchronous call to findPetsByStatus */
typedef void (^CompletedGetFindPetsByStatus)(BOOL success, HttpContext* context, NSArray<Pet> * response, NSError* error);

/**
* Multiple status values can be provided with comma separated strings
* @param    status    Required parameter: Status values that need to be considered for filter
*/
- (void) findPetsByStatusAsyncWithStatus:(NSArray<NSNumber*>*) status
                completionBlock:(CompletedGetFindPetsByStatus) onCompleted;

/**
* Completion block definition for asynchronous call to findPetsByTags */
typedef void (^CompletedGetFindPetsByTags)(BOOL success, HttpContext* context, NSArray<Pet> * response, NSError* error);

/**
* Muliple tags can be provided with comma separated strings. Use tag1, tag2, tag3 for testing.
* @param    tags    Required parameter: Tags to filter by
*/
- (void) findPetsByTagsAsyncWithTags:(NSArray*) tags
                completionBlock:(CompletedGetFindPetsByTags) onCompleted;

/**
* Completion block definition for asynchronous call to getPetById */
typedef void (^CompletedGetPetById)(BOOL success, HttpContext* context, Pet* response, NSError* error);

/**
* Returns a single pet
* @param    petId    Required parameter: ID of pet to return
*/
- (void) getPetByIdAsyncWithPetId:(long) petId
                completionBlock:(CompletedGetPetById) onCompleted;

/**
* Completion block definition for asynchronous call to updatePetWithForm */
typedef void (^CompletedPostUpdatePetWithForm)(BOOL success, HttpContext* context, NSError* error);

/**
* Updates a pet in the store with form data
* @param    petId    Required parameter: ID of pet that needs to be updated
* @param    name    Optional parameter: Updated name of the pet
* @param    status    Optional parameter: Updated status of the pet
*/
- (void) updatePetWithFormAsyncWithPetId:(long) petId
                name:(NSString*) name
                status:(NSString*) status
                completionBlock:(CompletedPostUpdatePetWithForm) onCompleted;

/**
* Completion block definition for asynchronous call to deletePet */
typedef void (^CompletedDeletePet)(BOOL success, HttpContext* context, NSError* error);

/**
* Deletes a pet
* @param    petId    Required parameter: Pet id to delete
* @param    apiKey    Optional parameter: Example: 
*/
- (void) deletePetAsyncWithPetId:(long) petId
                apiKey:(NSString*) apiKey
                completionBlock:(CompletedDeletePet) onCompleted;

/**
* Completion block definition for asynchronous call to uploadFile */
typedef void (^CompletedPostUploadFile)(BOOL success, HttpContext* context, ApiResponse* response, NSError* error);

/**
* uploads an image
* @param    petId    Required parameter: ID of pet to update
* @param    additionalMetadata    Optional parameter: Additional data to pass to server
* @param    file    Optional parameter: file to upload
*/
- (void) uploadFileAsyncWithPetId:(long) petId
                additionalMetadata:(NSString*) additionalMetadata
                file:(NSURL*) file
                completionBlock:(CompletedPostUploadFile) onCompleted;

@end