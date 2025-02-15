//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDPreferredResidentsList, HMDResidentDevice, HMDResidentSelectionInfo, HMMLogEvent, NSDate, NSError, NSSet, NSUUID;
@protocol HMDResidentSelectionManager;

@protocol HMDResidentSelectionManagerDelegate <NSObject>
- (void)residentSelectionManager:(id <HMDResidentSelectionManager>)arg1 didUpdatePreferredResidentsList:(HMDPreferredResidentsList *)arg2;
- (void)residentSelectionManager:(id <HMDResidentSelectionManager>)arg1 didUpdateResidentSelectionInfo:(HMDResidentSelectionInfo *)arg2 completion:(void (^)(NSError *))arg3;
- (void)residentSelectionManager:(id <HMDResidentSelectionManager>)arg1 didReceivePrimaryResidentIdsIdentifier:(NSUUID *)arg2 selectionTimestamp:(NSDate *)arg3;
- (void)residentSelectionManagerReadyAsResident:(id <HMDResidentSelectionManager>)arg1;
- (void)residentSelectionManager:(id <HMDResidentSelectionManager>)arg1 didUpdateActiveNodes:(NSSet *)arg2;
- (void)residentSelectionManager:(id <HMDResidentSelectionManager>)arg1 didUpdateResidentDevice:(HMDResidentDevice *)arg2;
- (void)residentSelectionManager:(id <HMDResidentSelectionManager>)arg1 reassertAsTheCurrentPrimaryWithSelectionTimestamp:(NSDate *)arg2;
- (void)residentSelectionManager:(id <HMDResidentSelectionManager>)arg1 didFailToSelectWithError:(NSError *)arg2;
- (void)residentSelectionManager:(id <HMDResidentSelectionManager>)arg1 didSelectPrimaryResident:(HMDResidentDevice *)arg2 selectionInfo:(HMDResidentSelectionInfo *)arg3 electionLogEvent:(HMMLogEvent *)arg4 completion:(void (^)(NSError *))arg5;
@end

