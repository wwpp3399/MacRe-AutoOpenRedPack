//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSAttributedString, NSString;

@interface MQOCRResultItem : NSObject <NSCoding>
{
    long long _itemType;
    long long _orderId;
    NSString *_msgContent;
    NSAttributedString *_showContent;
    NSAttributedString *_editContent;
    struct CGRect _itemRect;
}

@property(copy, nonatomic) NSAttributedString *editContent; // @synthesize editContent=_editContent;
@property(copy, nonatomic) NSAttributedString *showContent; // @synthesize showContent=_showContent;
@property(copy, nonatomic) NSString *msgContent; // @synthesize msgContent=_msgContent;
@property(nonatomic) struct CGRect itemRect; // @synthesize itemRect=_itemRect;
@property(nonatomic) long long orderId; // @synthesize orderId=_orderId;
@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

