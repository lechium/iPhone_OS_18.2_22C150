//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BackBoardServices/NSObject-Protocol.h>

@class BKSDisplayProgressIndicatorProperties, CADisplay, NSString;

@protocol BKSDisplayRenderOverlayDescribing <NSObject>
@property(readonly, nonatomic, getter=isInterstitial) _Bool interstitial;
@property(readonly, nonatomic) BKSDisplayProgressIndicatorProperties *progressIndicatorProperties;
@property(readonly, nonatomic) _Bool lockBacklight;
@property(readonly, nonatomic) long long interfaceOrientation;
@property(readonly, retain, nonatomic) CADisplay *display;
@property(readonly, copy, nonatomic) NSString *name;
@end

