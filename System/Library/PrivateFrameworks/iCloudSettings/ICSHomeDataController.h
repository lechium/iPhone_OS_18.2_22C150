//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface ICSHomeDataController : NSObject
{
    MISSING_TYPE *account;	// 8 = 0x8
    MISSING_TYPE *networkRequest;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000c2d60
- (id)init;	// IMP=0x00000000000c2d00
- (void)reportStatefulHeaderImpressionWithUrl:(id)arg1 payload:(id)arg2;	// IMP=0x00000000000c2b00
- (void)fetchCloudStorageInfo:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c2400
- (id)cachediCloudHomeDataModel;	// IMP=0x00000000000c1e60
- (void)fetchCloudStorage:(_Bool)arg1 completion:(void (^)(NSString *))arg2;	// IMP=0x00000000000c1ae0
- (void)fetchiCloudHomeDataModelAllowingCache:(_Bool)arg1 completion:(void (^)(ICSHomeDataModel *, NSError *))arg2;	// IMP=0x00000000000c15a0
- (id)initWithAccount:(id)arg1 launchedFromRootLevel:(_Bool)arg2;	// IMP=0x00000000000c0af0
- (id)initWithAccount:(id)arg1;	// IMP=0x00000000000c0aa0

@end
