//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TCFontName : NSObject
{
    NSString *_styleName;	// 8 = 0x8
    NSString *_fullName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002e1b2b
@property(readonly, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(readonly, nonatomic) NSString *styleName; // @synthesize styleName=_styleName;
- (id)description;	// IMP=0x00000000002e1ab3
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002e19d2
- (id)equivalentDictionary;	// IMP=0x00000000002e1867
- (id)initWithStyleName:(id)arg1 fullName:(id)arg2;	// IMP=0x00000000002e175f

@end
