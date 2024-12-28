//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PRLexiconGroup : NSObject
{
    _Bool _cachedOnly;	// 8 = 0x8
    NSString *_localization;	// 16 = 0x10
    NSArray *_lexicons;	// 24 = 0x18
}

@property(readonly) _Bool cachedOnly; // @synthesize cachedOnly=_cachedOnly;
@property(readonly, copy) NSArray *lexicons; // @synthesize lexicons=_lexicons;
@property(readonly, copy) NSString *localization; // @synthesize localization=_localization;
- (void)dealloc;	// IMP=0x0000000000060416
- (id)description;	// IMP=0x0000000000060362
- (id)initWithLocalization:(id)arg1 lexicons:(id)arg2 cachedOnly:(_Bool)arg3;	// IMP=0x00000000000602e1

@end
