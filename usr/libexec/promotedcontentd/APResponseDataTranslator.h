//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface APResponseDataTranslator : NSObject
{
    id _requester;	// 8 = 0x8
    id _response;	// 16 = 0x10
}

+ (Class)translatesClass;	// IMP=0x0040000000052de9
- (void).cxx_destruct;	// IMP=0x0020000000052ed8
@property(retain) id response; // @synthesize response=_response;
@property(retain) id requester; // @synthesize requester=_requester;
- (id)translate:(id *)arg1;	// IMP=0x0010000000052e8a
- (id)initWithResponse:(id)arg1 forRequester:(id)arg2;	// IMP=0x0010000000052df1

@end

