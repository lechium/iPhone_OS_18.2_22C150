//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface _EARLanguageDetectorV2Result : NSObject
{
    NSDictionary *_confidences;	// 8 = 0x8
    unsigned long long _detectedLanguage;	// 16 = 0x10
    NSString *_dominantLocale;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000025d0d4
@property(copy, nonatomic) NSString *dominantLocale; // @synthesize dominantLocale=_dominantLocale;
@property(nonatomic) unsigned long long detectedLanguage; // @synthesize detectedLanguage=_detectedLanguage;
@property(copy, nonatomic) NSDictionary *confidences; // @synthesize confidences=_confidences;

@end
