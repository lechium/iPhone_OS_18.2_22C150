//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WallpaperKit/NSObject-Protocol.h>

@class NSString;

@protocol WKWallpaperPosterEditingLook <NSObject>
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *displayName;
- (id)initWithDisplayName:(NSString *)arg1;
- (id)initWithIdentifier:(NSString *)arg1 displayName:(NSString *)arg2;
@end

