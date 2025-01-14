//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@protocol SBHardwareButtonInteraction <NSObject>

@optional
- (void)observeSinglePressDidFail;
- (void)observeFinalPressUp;
- (void)observeLongPressCanceled;
- (_Bool)consumeLongPress;
- (_Bool)disallowsLongPressForReason:(id *)arg1;
- (_Bool)disallowsTriplePressForReason:(id *)arg1;
- (_Bool)disallowsDoublePressForReason:(id *)arg1;
- (_Bool)disallowsSinglePressForReason:(id *)arg1;
- (_Bool)consumeTriplePressUp;
- (_Bool)consumeDoublePressUp;
- (_Bool)consumeDoublePressDown;
- (_Bool)consumeSinglePressUp;
- (_Bool)consumeSinglePressDown;
- (_Bool)consumeSecondPressDown;
- (_Bool)consumeInitialPressUp;
- (_Bool)consumeInitialPressDown;
@end

