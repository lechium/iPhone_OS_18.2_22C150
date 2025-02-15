//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class SBHIconModel, SBIconView;
@protocol UIDropSession;

@protocol SBHLibraryIndicatorIconDropInteractionContextProviding <NSObject>
- (void)handleSpringLoadDidActivateForLibraryIndicatorIconView:(SBIconView *)arg1;
- (void)libraryIndicatorIconView:(SBIconView *)arg1 didAcceptDropForSession:(id <UIDropSession>)arg2;
- (SBHIconModel *)iconModelForDroppingIntoLibraryIndicatorIconView:(SBIconView *)arg1;
@end

