//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RAPFileManager : NSObject
{
}

+ (double)standardTimeToLive;	// IMP=0x004000000072ed95
+ (id)dataAtFileURL:(id)arg1;	// IMP=0x001000000072ecf0
+ (_Bool)haveContentsOfFilePathExpired:(id)arg1 withSuggestedRetryDate:(id)arg2 withTimeToLive:(double)arg3;	// IMP=0x001000000072eaf7
+ (_Bool)haveContentsOfFilePathExpired:(id)arg1 withSuggestedRetryDate:(id)arg2;	// IMP=0x001000000072ea78
+ (_Bool)removeAllItemsInDirectory:(id)arg1;	// IMP=0x001000000072e8b2
+ (_Bool)removeItemAtFilePath:(id)arg1;	// IMP=0x001000000072e6d3
+ (unsigned long long)numberOfItemsInDirectory:(id)arg1;	// IMP=0x001000000072e57b
+ (_Bool)saveData:(id)arg1 toDirectory:(id)arg2 filename:(id)arg3;	// IMP=0x001000000072e0d2
+ (id)baseSubmissionFilePath;	// IMP=0x001000000072e039
+ (id)baseLayoutFilePath;	// IMP=0x001000000072dfa0
+ (id)baseFilePath:(id *)arg1;	// IMP=0x001000000072de8a

@end
