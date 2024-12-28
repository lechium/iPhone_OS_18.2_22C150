//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FocusEngine/NSObject-Protocol.h>

@class NSArray, _FEDebugLogStack;
@protocol _FEFocusEnvironment;

@protocol _FEFocusEnvironmentPreferenceEnumerationContext <NSObject>
@property(readonly, nonatomic) _FEDebugLogStack *debugStack;
@property(readonly, nonatomic) NSArray *preferredEnvironments;
@property(readonly, nonatomic) id <_FEFocusEnvironment> preferringEnvironment;
@property(readonly, nonatomic) _Bool prefersNothingFocused;
@property(readonly, nonatomic, getter=isPreferredByItself) _Bool preferredByItself;
@property(readonly, nonatomic) _Bool isLeafPreference;
@property(readonly, nonatomic) _Bool isPrimaryPreference;
@property(readonly, nonatomic) id <_FEFocusEnvironment> environment;
@end
