//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "INFSentenceToken.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface INFNumber : INFSentenceToken
{
    NSString *_identifier;	// 8 = 0x8
    NSNumber *_value;	// 16 = 0x10
}

+ (id)numberWithIdentifier:(id)arg1;	// IMP=0x006000000000871a
- (void).cxx_destruct;	// IMP=0x00000000000088e4
@property(copy, nonatomic) NSNumber *value; // @synthesize value=_value;
- (id)identifier;	// IMP=0x00000000000088b1
- (id)dictionaryRepresentation;	// IMP=0x00000000000088a9
- (id)stringForContext:(id)arg1;	// IMP=0x0000000000008836
- (id)contributingSentenceContext;	// IMP=0x00000000000087dc
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000008763

@end

