//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface FTWebVTTTranscriptionResult : NSObject
{
    _Bool isEmptyCueOut;	// 8 = 0x8
    NSString *text;	// 16 = 0x10
    NSError *error;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008a250
@property(copy, nonatomic) NSError *error; // @synthesize error;
@property(nonatomic) _Bool isEmptyCueOut; // @synthesize isEmptyCueOut;
@property(copy, nonatomic) NSString *text; // @synthesize text;

@end
