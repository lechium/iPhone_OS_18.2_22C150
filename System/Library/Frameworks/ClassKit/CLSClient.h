//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CLSClientDelegate;

@interface CLSClient : NSObject
{
    id <CLSClientDelegate> _delagate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007bae9
@property(nonatomic) __weak id <CLSClientDelegate> delagate; // @synthesize delagate=_delagate;
- (oneway void)clientRemote_databaseRecreated;	// IMP=0x000000000007ba3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
