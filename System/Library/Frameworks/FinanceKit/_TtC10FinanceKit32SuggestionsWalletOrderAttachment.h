//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData, NSString, NSURL;

@interface _TtC10FinanceKit32SuggestionsWalletOrderAttachment : NSObject
{
    MISSING_TYPE *url;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *data;	// 0 = 0x0
    MISSING_TYPE *fqoid;	// 5277952 = 0x508900
    MISSING_TYPE *state;	// 83801 = 0x14759
}

+ (id)readContentsOfOrderAt:(id)arg1 error:(id *)arg2;	// IMP=0x006000000040f880
- (void).cxx_destruct;	// IMP=0x000000000040fe10
- (id)init;	// IMP=0x000000000040fdb0
@property(nonatomic) long long state; // @synthesize state;
@property(nonatomic, copy) NSString *fqoid;
@property(nonatomic, copy) NSData *data;
@property(nonatomic, copy) NSURL *url;

@end

