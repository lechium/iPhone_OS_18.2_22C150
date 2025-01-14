//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class IKMenuItemElement, MPPlaybackContext, NSArray;

@protocol VideosExtrasPlaybackDelegate <NSObject>
- (void)extrasRequestReloadWithContext:(MPPlaybackContext *)arg1;
- (void)extrasRequestsPlaybackStop;
- (void)extrasRequestsMediaPlayback:(NSArray *)arg1 isBackground:(_Bool)arg2;

@optional
- (void)extrasBackButtonPressed;
- (void)extrasMenuItemSelected:(IKMenuItemElement *)arg1 atIndex:(unsigned long long)arg2;
- (void)extrasDoneButtonPressed;
@end

