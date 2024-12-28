//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface PFFairPlayKeyLoader : NSObject
{
    MISSING_TYPE *metadataLoader;	// 8 = 0x8
    MISSING_TYPE *fairPlayKeySessionProvider;	// 16 = 0x10
    MISSING_TYPE *activeSessionStore;	// 56 = 0x38
    MISSING_TYPE *internalQueue;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_logPrefix;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000003fb5b0
- (void)stopKeyRequestWithSession:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003f9b70
- (void)stopKeyRequestWithAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003f9560
- (void)renewKeyWithSession:(id)arg1;	// IMP=0x00000000003f8b90
- (void)renewKeyRequestsWithAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003f8860
- (void)renewKeyRequestWithAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003f7930
- (void)startKeyRequestWithSession:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003f6fa0
- (void)createSessionWithAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003f6860
- (id)init;	// IMP=0x00000000003f6150

@end
