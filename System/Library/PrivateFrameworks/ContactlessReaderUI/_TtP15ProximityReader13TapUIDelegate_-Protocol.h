//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol _TtP15ProximityReader13TapUIDelegate_
- (void)reportProxEventInRange:(_Bool)arg1 inRangeTime:(unsigned int)arg2;
- (void)reportGuidanceUpdateWithVisible:(_Bool)arg1 trigger:(NSString *)arg2;
- (void)tapUIFinishedWithExpected:(_Bool)arg1 issuerPIN:(_Bool)arg2;
- (void)tapUIRequestingCancel;
- (void)tapUIRequestingRetry;
- (void)tapUIDidLoad;
@end
