//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class APSSystemMonitor;
@protocol APSUltraConstrainedProvider;

@interface APSTopicFilterPolicyEmbedded
{
    _Bool _downgradeWhenLocked;	// 16 = 0x10
    APSSystemMonitor *_systemMonitor;	// 24 = 0x18
    id <APSUltraConstrainedProvider> _ultraConstrainedProvider;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000c84d6
@property(nonatomic) __weak id <APSUltraConstrainedProvider> ultraConstrainedProvider; // @synthesize ultraConstrainedProvider=_ultraConstrainedProvider;
@property(retain, nonatomic) APSSystemMonitor *systemMonitor; // @synthesize systemMonitor=_systemMonitor;
@property(nonatomic) _Bool downgradeWhenLocked; // @synthesize downgradeWhenLocked=_downgradeWhenLocked;
- (void)systemDidUnlock;	// IMP=0x00100000000c8425
- (void)systemDidLock;	// IMP=0x00100000000c83e6
- (void)logFilterPolicyInformation;	// IMP=0x00100000000c8297
- (id)topicChosenByPolicyFromTopics:(id)arg1;	// IMP=0x00100000000c80de
- (long long)filterChosenByPolicyForTopic:(id)arg1;	// IMP=0x00100000000c7cec
- (void)dealloc;	// IMP=0x00100000000c7ca0
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000000c7c8c
- (id)initWithDelegate:(id)arg1 ultraConstrainedProvider:(id)arg2;	// IMP=0x00100000000c7bf3
- (id)initShouldDowngradeWhenLocked:(_Bool)arg1 systemMonitor:(id)arg2 ultraConstrainedProvider:(id)arg3 withDelegate:(id)arg4;	// IMP=0x00100000000c7b23

@end

