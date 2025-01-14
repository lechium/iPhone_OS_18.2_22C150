//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSProgress, NSString, NSUUID;
@protocol SFDownloadStorageUsageMonitorEntryDelegate;

__attribute__((visibility("hidden")))
@interface SFDownloadStorageUsageMonitorEntry : NSObject
{
    NSUUID *_identifier;	// 8 = 0x8
    NSProgress *_progress;	// 16 = 0x10
    id _progressSubscriber;	// 24 = 0x18
    NSString *_destinationPath;	// 32 = 0x20
    NSData *_progressData;	// 40 = 0x28
    long long _cachedUsage;	// 48 = 0x30
    id <SFDownloadStorageUsageMonitorEntryDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000031113
@property(nonatomic) __weak id <SFDownloadStorageUsageMonitorEntryDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long cachedUsage; // @synthesize cachedUsage=_cachedUsage;
@property(retain, nonatomic) NSData *progressData; // @synthesize progressData=_progressData;
@property(retain, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(retain, nonatomic) id progressSubscriber; // @synthesize progressSubscriber=_progressSubscriber;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)updateWithDictionaryRepresentation:(id)arg1;	// IMP=0x0000000000030e12
- (void)_updateProgressSubscriptionWithData:(id)arg1;	// IMP=0x0000000000030b79
- (void)_didLoseProgress:(id)arg1;	// IMP=0x00000000000309a8
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000003091e
- (void)_didGainProgress:(id)arg1;	// IMP=0x000000000003086d
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000030800

@end

