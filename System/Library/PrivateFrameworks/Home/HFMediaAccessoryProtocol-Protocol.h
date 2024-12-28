//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NSObject-Protocol.h>

@class HFMediaAccessoryCommonSettingsManager, NAFuture;

@protocol HFMediaAccessoryProtocol <NSObject>
@property(readonly, nonatomic) HFMediaAccessoryCommonSettingsManager *commonSettingsManager;
- (NAFuture *)enableDoorbellChime:(_Bool)arg1;
- (_Bool)isDoorbellChimeEnabled;
- (NAFuture *)setEnableAudioAnalysis:(_Bool)arg1;
- (_Bool)isAudioAnalysisEnabled;
- (NAFuture *)setSiriDisabled:(_Bool)arg1;
- (_Bool)isSiriDisabled;
- (NAFuture *)setEnableAnnounce:(_Bool)arg1;
- (_Bool)isAnnounceEnabled;
- (_Bool)isSiriEndpointAccessory;
@end
