//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VNMultiDetectorOriginalRequestInfo : NSObject
{
    NSString *_originatingRequestSpecifierKey;	// 8 = 0x8
    unsigned long long _originalRequestResultsIndex;	// 16 = 0x10
}

+ (id)requestClassNameFromRequestKey:(id)arg1;	// IMP=0x00400000002cd5ef
+ (id)requestKeyFromRequest:(id)arg1;	// IMP=0x00400000002cd590
+ (id)originatingRequestSpecifierToDetectorClassMap;	// IMP=0x00400000002cd55d
- (void).cxx_destruct;	// IMP=0x00000000002cd54d
@property(readonly, nonatomic) unsigned long long originalRequestResultsIndex; // @synthesize originalRequestResultsIndex=_originalRequestResultsIndex;
@property(readonly, nonatomic) NSString *originatingRequestSpecifierKey; // @synthesize originatingRequestSpecifierKey=_originatingRequestSpecifierKey;
- (id)description;	// IMP=0x00000000002cd4f5
- (id)initWithOriginatingRequestSpecifierProcessingOptionKey:(id)arg1 originalRequestResultsIndex:(unsigned long long)arg2;	// IMP=0x00000000002cd43c

@end

