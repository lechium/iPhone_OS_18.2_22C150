//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSArray, _UITabElement, _UITabElementGroup;

@protocol _UITabElementGroupDelegate <NSObject>
- (void)_tabElementGroup:(_UITabElementGroup *)arg1 didSelectElement:(_UITabElement *)arg2;

@optional
- (void)_tabElementGroup:(_UITabElementGroup *)arg1 didCustomizeDisplayOrder:(NSArray *)arg2;
@end

