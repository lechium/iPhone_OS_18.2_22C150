//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString;
@protocol _UIExcludable;

@protocol _UIExcludable <NSObject>
- (NSString *)_excludableDescription;
- (void)_exclude;
- (_Bool)_isExcludedByExcludable:(id <_UIExcludable>)arg1;
- (_Bool)_canExcludeOtherExcludables;
@end
