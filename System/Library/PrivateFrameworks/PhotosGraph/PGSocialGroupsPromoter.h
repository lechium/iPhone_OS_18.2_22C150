//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PGSocialGroupsPromoter : NSObject
{
}

+ (id)ingestUserVerifiedSocialGroupsFromPhotoLibrary:(id)arg1 intoGraph:(id)arg2 progressReporter:(id)arg3 error:(id *)arg4;	// IMP=0x008000000025a890
+ (id)promoteSocialGroupsInGraph:(id)arg1 photoLibrary:(id)arg2 maxNumberOfElectedSocialGroups:(long long)arg3 progressReporter:(id)arg4 persistGroups:(_Bool)arg5 error:(id *)arg6;	// IMP=0x0080000000254040
- (void).cxx_destruct;	// IMP=0x000000000025ac00
- (id)init;	// IMP=0x000000000025aba0

@end

