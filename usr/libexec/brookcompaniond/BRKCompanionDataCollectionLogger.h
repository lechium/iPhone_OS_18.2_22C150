//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRKIDSService, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface BRKCompanionDataCollectionLogger : NSObject
{
    NSURL *_storageDirectory;	// 8 = 0x8
    BRKIDSService *_service;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000002abc
- (void)service:(id)arg1 didReceiveResourceURL:(id)arg2;	// IMP=0x001000000000277c
- (id)initWithIDSService:(id)arg1;	// IMP=0x001000000000262f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

