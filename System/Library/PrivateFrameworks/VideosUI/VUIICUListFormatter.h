//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSListFormatter.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIICUListFormatter : NSListFormatter
{
    NSString *_style;	// 8 = 0x8
}

+ (id)localizedStringByJoiningStrings:(id)arg1 style:(id)arg2;	// IMP=0x006000000020bc56
+ (id)localizedStringByJoiningStrings:(id)arg1;	// IMP=0x006000000020bc32
- (void).cxx_destruct;	// IMP=0x000000000020bd68
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
- (id)_stringFromStringArray:(id)arg1;	// IMP=0x000000000020bb8a
- (id)initWithLocale:(id)arg1 style:(id)arg2;	// IMP=0x000000000020ba59
- (id)initWithLocale:(id)arg1;	// IMP=0x000000000020ba45

@end
