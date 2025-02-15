//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class DEPDeviceUploadCredentials, DEPDeviceUploadOrganization, DEPDeviceUploadSubmitDeviceRequestPayload, NSData, NSString;

@protocol DEPXPCProtocol <NSObject>
- (void)pingWithCompletionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg1;
- (void)syncDEPPushToken:(NSData *)arg1 pushTopic:(NSString *)arg2 completionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg3;
- (void)submitDeviceUploadRequest:(DEPDeviceUploadSubmitDeviceRequestPayload *)arg1 credentials:(DEPDeviceUploadCredentials *)arg2 completionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg3;
- (void)retrieveDeviceUploadSoldToIdsForOrganization:(DEPDeviceUploadOrganization *)arg1 credentials:(DEPDeviceUploadCredentials *)arg2 completionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg3;
- (void)retrieveDeviceUploadRequestTypesWithCredentials:(DEPDeviceUploadCredentials *)arg1 completionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg2;
- (void)retrieveDeviceUploadOrganizationsWithCredentials:(DEPDeviceUploadCredentials *)arg1 completionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg2;
- (void)unenrollWithCompletionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg1;
- (void)fetchConfigurationWithoutValidationWithCompletionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg1;
- (void)fetchConfigurationWithCompletionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg1;
- (void)provisionallyEnrollWithNonce:(NSString *)arg1 completionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg2;
@end

