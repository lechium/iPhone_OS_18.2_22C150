//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CKAddressBook : NSObject
{
}

+ (id)monogrammerWithDiameter:(double)arg1 style:(long long)arg2 useAppTintColor:(_Bool)arg3 customFont:(id)arg4;	// IMP=0x00800000006275a8
+ (void)flushMonogrammers;	// IMP=0x008000000062754e
+ (id)monogrammerProvider;	// IMP=0x0080000000627535
+ (id)locationSharingContactImageOfDiameter:(double)arg1 forID:(id)arg2 useCustomFont:(_Bool)arg3;	// IMP=0x0080000000627486
+ (id)transcriptContactImageOfDiameter:(double)arg1 forID:(id)arg2;	// IMP=0x008000000062746f
+ (id)placeholderContactImageOfDiameter:(double)arg1 monogramStyle:(long long)arg2 tintMonogramText:(_Bool)arg3;	// IMP=0x008000000062741c
+ (id)contactImageOfDiameter:(double)arg1 forID:(id)arg2 monogramStyle:(long long)arg3 tintMonogramText:(_Bool)arg4 customFont:(id)arg5;	// IMP=0x008000000062715e
+ (id)contactImageOfDiameter:(double)arg1 forID:(id)arg2 monogramStyle:(long long)arg3 tintMonogramText:(_Bool)arg4;	// IMP=0x0080000000627146
+ (id)contactImageCache;	// IMP=0x0080000000627082

@end

