//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface COClientObserver
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
    id _cluster;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008d23d
@property(readonly, nonatomic) id cluster; // @synthesize cluster=_cluster;
@property(readonly, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008d15b
- (id)initWithConnection:(id)arg1 domain:(id)arg2 cluster:(id)arg3;	// IMP=0x000000000008cfc9
- (id)initWithConnection:(id)arg1;	// IMP=0x000000000008cf41

@end

