//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSJSError : IKJSObject
{
    unsigned long long _code;	// 8 = 0x8
    NSString *_message;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000004ad7
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) unsigned long long code; // @synthesize code=_code;
- (id)error;	// IMP=0x000000000000496c
- (id)description;	// IMP=0x00000000000047a7
- (id)init;	// IMP=0x0000000000004741

@end

