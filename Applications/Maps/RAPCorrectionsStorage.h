//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RAPCorrectionsStorage : NSObject
{
}

+ (id)pathForFeedbackRequestForSubmissionIdentifier:(id)arg1;	// IMP=0x0040000000d2a553
+ (id)basePathForCorrections;	// IMP=0x0010000000d2a4f0
- (id)correctionsDataForSubmissionIdentifier:(id)arg1;	// IMP=0x0040000000d2a6c8
- (_Bool)removeCorrectionDataForSubmissionIdentifier:(id)arg1;	// IMP=0x0010000000d2a66c
- (_Bool)saveCorrections:(id)arg1 forSubmissionIdentifier:(id)arg2;	// IMP=0x0010000000d2a5d1

@end

