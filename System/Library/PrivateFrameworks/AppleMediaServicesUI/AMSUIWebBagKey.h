//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebBagKey : NSObject
{
    NSString *_key;	// 8 = 0x8
    unsigned long long _valueType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008e98d
@property(nonatomic) unsigned long long valueType; // @synthesize valueType=_valueType;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (id)description;	// IMP=0x000000000008e94c

@end
