//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EDHeaderFooter : NSObject
{
    NSString *mHeaderString;	// 8 = 0x8
    NSString *mFooterString;	// 16 = 0x10
}

+ (id)headerFooter;	// IMP=0x00600000003a38b9
- (void).cxx_destruct;	// IMP=0x00000000003a392d
- (id)description;	// IMP=0x00000000003a38ef
- (void)setFooterString:(id)arg1;	// IMP=0x000000000013bf9c
- (id)footerString;	// IMP=0x00000000003a38e1
- (void)setHeaderString:(id)arg1;	// IMP=0x000000000013fb32
- (id)headerString;	// IMP=0x00000000003a38d3

@end

