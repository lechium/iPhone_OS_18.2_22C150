//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface OITSUDateFormatCategoryEntry : NSObject
{
    unsigned short _separator;	// 8 = 0x8
    NSMutableArray *_formatters;	// 16 = 0x10
    NSMutableSet *_formatStrings;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000250593
- (id)newDateFromString:(id)arg1 forceAllowAMPM:(_Bool)arg2 successfulFormatString:(id *)arg3 perfect:(_Bool *)arg4;	// IMP=0x0000000000250213
- (void)addFormat:(id)arg1 locale:(id)arg2;	// IMP=0x0000000000250165
- (id)formatStrings;	// IMP=0x00000000002500a5
- (unsigned short)separator;	// IMP=0x000000000025009b
- (id)initWithSeparator:(unsigned short)arg1;	// IMP=0x000000000025001e

@end
