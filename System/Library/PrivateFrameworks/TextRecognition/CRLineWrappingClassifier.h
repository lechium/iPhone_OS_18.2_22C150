//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel, NSString;

__attribute__((visibility("hidden")))
@interface CRLineWrappingClassifier : NSObject
{
    MLModel *_model;	// 8 = 0x8
    NSString *_locale;	// 16 = 0x10
}

+ (_Bool)_lineWrappingShouldFallBackForLocale:(id)arg1;	// IMP=0x00600000000ab94f
+ (id)modelLocaleForLocale:(id)arg1;	// IMP=0x00600000000ab303
+ (id)urlOfModelForLocale:(id)arg1;	// IMP=0x00600000000ab0f8
+ (_Bool)localeIsSupported:(id)arg1;	// IMP=0x00600000000ab075
+ (id)localeToModelMap;	// IMP=0x00600000000aacfa
- (void).cxx_destruct;	// IMP=0x00000000000abaed
@property(readonly, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ab734
@property(readonly, nonatomic) unsigned long long featureCount;
@property(readonly, nonatomic) NSString *modelLocale;
- (id)initWithLocale:(id)arg1;	// IMP=0x00000000000ab51e
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ab3c2

@end

