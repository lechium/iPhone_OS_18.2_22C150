//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreKnowledge/NSObject-Protocol.h>

@class CKVDonateTask, CKVLocalization, NSSet;

@protocol CKVDonateTaskProvider <NSObject>
- (NSSet *)allInstalledAppBundleIdentifiers;
- (void)setupBridgeListenersWithHandler:(void (^)(NSString *))arg1;
- (CKVDonateTask *)verificationTaskForId:(unsigned short)arg1;
- (CKVDonateTask *)derivativeTaskForId:(unsigned short)arg1 usingLocalization:(CKVLocalization *)arg2 modifiedItemIds:(NSSet *)arg3;
- (CKVDonateTask *)taskForId:(unsigned short)arg1 usingLocalization:(CKVLocalization *)arg2;
- (void)enableSimulatedTasks:(_Bool)arg1;
@end

