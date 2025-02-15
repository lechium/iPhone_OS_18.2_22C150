//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COCluster;
@protocol COClusterAssertionDelegate;

__attribute__((visibility("hidden")))
@interface COClusterAssertion : NSObject
{
    id <COClusterAssertionDelegate> _delegate;	// 8 = 0x8
    COCluster *_cluster;	// 16 = 0x10
}

+ (id)assertionForCluster:(id)arg1 delegate:(id)arg2;	// IMP=0x006000000000e8d1
- (void).cxx_destruct;	// IMP=0x000000000000ea12
@property(readonly, nonatomic) COCluster *cluster; // @synthesize cluster=_cluster;
@property(readonly, nonatomic) __weak id <COClusterAssertionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyInvalidated;	// IMP=0x000000000000e97d
- (void)dealloc;	// IMP=0x000000000000e93f
- (id)_initWithCluster:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000000e837

@end

