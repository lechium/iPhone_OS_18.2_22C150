//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface AKAccountsMetadataController : NSObject
{
    MISSING_TYPE *mediaServicesController;	// 8 = 0x8
    MISSING_TYPE *localStorageController;	// 16 = 0x10
    MISSING_TYPE *metadataService;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000144960
- (id)init;	// IMP=0x0010000000144900
- (void)updatePrimaryAppsMetadataWithDeveloperTeams:(NSArray *)arg1 forAltDSID:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;	// IMP=0x0010000000142f30
- (void)cancelAppIconRequestForClientID:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x0010000000142540
- (void)fetchAppIconForClientID:(NSString *)arg1 iconSize:(struct CGSize)arg2 completionHandler:(void (^)(AKIconContext *, NSError *))arg3;	// IMP=0x0010000000142030
- (id)initWithMediaServiceController:(id)arg1 localStorageController:(id)arg2 metadataService:(id)arg3;	// IMP=0x00100000001410e0

@end
