//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (DAKeychainAdditions)
+ (id)da_new64ByteGUID;	// IMP=0x00500000000263f3
+ (id)da_newGUID;	// IMP=0x005000000002639c
- (id)stringByURLQuoting;	// IMP=0x00100000000161a8
- (id)da_trimWhiteSpace;	// IMP=0x0010000000026354
- (_Bool)da_hasPrefixCaseInsensitive:(id)arg1;	// IMP=0x001000000002632c
- (id)da_stringByURLEscapingPathComponent;	// IMP=0x00100000000262d6
- (id)da_appendSlashIfNeeded;	// IMP=0x001000000002627d
- (id)da_removeSlashIfNeeded;	// IMP=0x0010000000026217
- (id)da_stringByRemovingPercentEscapesForUsername;	// IMP=0x00100000000261f1
- (id)da_stringByAddingPercentEscapesForUsername;	// IMP=0x00100000000261be
- (id)da_absoluteURLForChildLeastInfoRepresentationRelativeToParentURL:(id)arg1;	// IMP=0x00100000000279ef
@end

