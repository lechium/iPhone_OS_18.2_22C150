//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUActionRowItemViewModel.h"

@class MUCircleProgressObservingView, NSByteCountFormatter, NSString;
@protocol MUOfflineMapProvider;

__attribute__((visibility("hidden")))
@interface MUDownloadOfflineActionRowItemViewModel : MUActionRowItemViewModel
{
    NSByteCountFormatter *_byteCountFormatter;	// 8 = 0x8
    MUCircleProgressObservingView *_progressView;	// 16 = 0x10
    id <MUOfflineMapProvider> _offlineMapProvider;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000117899
@property(nonatomic) __weak id <MUOfflineMapProvider> offlineMapProvider; // @synthesize offlineMapProvider=_offlineMapProvider;
- (void)offlineMapProviderUpdated:(id)arg1;	// IMP=0x000000000011785a
@property(readonly, nonatomic) unsigned long long actionItemType;
- (id)progressView;	// IMP=0x00000000001176e1
- (id)byteCountFormatter;	// IMP=0x000000000011768a
- (id)accessibilityIdentifier;	// IMP=0x0000000000117667
- (_Bool)titleUsesMonospacedNumbersFont;	// IMP=0x0000000000117628
- (id)titleText;	// IMP=0x00000000001174b0
- (id)accessoryView;	// IMP=0x0000000000117441
- (id)symbolName;	// IMP=0x00000000001173f5
- (_Bool)isEnabled;	// IMP=0x00000000001173ed
- (void)dealloc;	// IMP=0x000000000011737f
- (id)initWithOfflineMapProvider:(id)arg1;	// IMP=0x00000000001172f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

