//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/NSObject-Protocol.h>

@protocol CSHostableEntity, CSHostableEntityPresenting;

@protocol CSHostableEntityPresenterDelegate <NSObject>

@optional
- (void)hostableEntityPresenter:(id <CSHostableEntityPresenting>)arg1 didFailToActivate:(id <CSHostableEntity>)arg2;
- (void)hostableEntityPresenter:(id <CSHostableEntityPresenting>)arg1 didEndHosting:(id <CSHostableEntity>)arg2;
- (void)hostableEntityPresenter:(id <CSHostableEntityPresenting>)arg1 didBeginHosting:(id <CSHostableEntity>)arg2;
@end
