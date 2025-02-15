//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SRModeDialogTransformer : NSObject
{
}

+ (id)_instrumentation;	// IMP=0x004000000008d189
+ (id)_analytics;	// IMP=0x001000000008d170
+ (void)_logModeComputationForAceCommand:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x001000000008d003
+ (id)_addViewsForAddDialogs:(id)arg1 views:(id)arg2;	// IMP=0x001000000008cd5f
+ (id)_sayItForDialog:(id)arg1;	// IMP=0x001000000008c9c7
+ (id)_speakableTextForDialog:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x001000000008c4e3
+ (id)_utteranceViewForDialog:(id)arg1 mode:(unsigned long long)arg2 printedOnly:(_Bool)arg3;	// IMP=0x001000000008bcf0
+ (id)_transformDialogAddViews:(id)arg1 forMode:(unsigned long long)arg2;	// IMP=0x001000000008b595
+ (id)_removeUtteranceViewsFromAddViews:(id)arg1 forMode:(unsigned long long)arg2;	// IMP=0x001000000008af8c
+ (id)_removeSpeakableTextFromAddViews:(id)arg1 forMode:(unsigned long long)arg2;	// IMP=0x001000000008a4d9
+ (id)_removeRedundantUtteranceViewsFromAddViews:(id)arg1 forMode:(unsigned long long)arg2;	// IMP=0x001000000008a08b
+ (id)_firstSnippetInViews:(id)arg1;	// IMP=0x0010000000089f3b
+ (_Bool)_alwaysPrintSiriResponse;	// IMP=0x0010000000089ef0
+ (id)_redundantDUCIds;	// IMP=0x0010000000089c76
+ (id)_configurationDictionary;	// IMP=0x0010000000089b17
+ (id)_transformLegacyAddViews:(id)arg1 forMode:(unsigned long long)arg2;	// IMP=0x0010000000089940
+ (_Bool)_shouldTransformLegacyAddViews;	// IMP=0x0010000000089938
+ (unsigned long long)_typeOfAddViews:(id)arg1;	// IMP=0x0010000000089761
+ (_Bool)supportsTransformationForAceCommand:(id)arg1;	// IMP=0x0010000000089701
+ (id)transformAddDialogs:(id)arg1 forMode:(unsigned long long)arg2;	// IMP=0x001000000008915b
+ (id)transformAddViews:(id)arg1 forMode:(unsigned long long)arg2;	// IMP=0x0010000000088ef0

@end

