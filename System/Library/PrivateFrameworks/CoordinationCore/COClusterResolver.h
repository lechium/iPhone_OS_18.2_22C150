//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COCluster, NSArray, NSString;
@protocol COClusterResolverDelegate;

__attribute__((visibility("hidden")))
@interface COClusterResolver : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _activatedCluster;	// 12 = 0xc
    _Bool _bootstrapCompleted;	// 13 = 0xd
    COCluster *_cluster;	// 16 = 0x10
    id <COClusterResolverDelegate> _delegate;	// 24 = 0x18
    NSString *_currentIdentifier;	// 32 = 0x20
    NSArray *_waitingForBootstrap;	// 40 = 0x28
}

+ (id)resolverForCluster:(id)arg1 delegate:(id)arg2;	// IMP=0x0060000000025cfe
- (void).cxx_destruct;	// IMP=0x0000000000026765
@property(retain, nonatomic) NSArray *waitingForBootstrap; // @synthesize waitingForBootstrap=_waitingForBootstrap;
@property(nonatomic) _Bool bootstrapCompleted; // @synthesize bootstrapCompleted=_bootstrapCompleted;
@property(nonatomic) _Bool activatedCluster; // @synthesize activatedCluster=_activatedCluster;
@property(retain, nonatomic) NSString *currentIdentifier; // @synthesize currentIdentifier=_currentIdentifier;
@property(readonly, nonatomic) __weak id <COClusterResolverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) COCluster *cluster; // @synthesize cluster=_cluster;
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000266ad
- (void)_delegateNotifyClusterIdentifierChanged:(id)arg1;	// IMP=0x0000000000026636
- (_Bool)_updateIdentifier:(id)arg1;	// IMP=0x0000000000026505
- (void)_invokeBootstrapBlocks;	// IMP=0x00000000000262b5
- (void)_activate;	// IMP=0x0000000000026045
- (void)activate;	// IMP=0x0000000000025e81
- (id)description;	// IMP=0x0000000000025d6c
- (id)_initWithCluster:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000025c5b

@end

