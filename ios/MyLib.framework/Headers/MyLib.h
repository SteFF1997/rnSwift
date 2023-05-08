#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MyLibApollo_apiCompiledField, MyLibApollo_apiCustomScalarAdapters, MyLibModelTodoConditionInput, MyLibApollo_apiOptional<__covariant V>, MyLibCreateTodoInput, MyLibMyMutationCompanion, MyLibMyMutation, MyLibMyMutationCreateTodo, MyLibMyMutationData, MyLibMyQueryCompanion, MyLibMyQueryListTodos, MyLibMyQueryData, MyLibMyQueryItem, MyLibMySubscriptionCompanion, MyLibMySubscriptionOnCreateTodo, MyLibMySubscriptionData, MyLibGraphQLBooleanCompanion, MyLibApollo_apiCustomScalarType, MyLibGraphQLFloatCompanion, MyLibGraphQLIDCompanion, MyLibGraphQLIntCompanion, MyLibGraphQLStringCompanion, MyLibKotlinEnumCompanion, MyLibKotlinEnum<E>, MyLibModelAttributeTypesCompanion, MyLibModelAttributeTypes, MyLibKotlinArray<T>, MyLibApollo_apiEnumType, MyLibModelSizeInput, MyLibModelStringInput, MyLibModelTodoConnectionCompanion, MyLibApollo_apiObjectType, MyLibMutationCompanion, MyLibQueryCompanion, MyLibSubscriptionCompanion, MyLibTodoCompanion, MyLibCreateTodoInput_InputAdapter, MyLibModelAttributeTypes_ResponseAdapter, MyLibModelSizeInput_InputAdapter, MyLibModelStringInput_InputAdapter, MyLibModelTodoConditionInput_InputAdapter, MyLibMyMutation_ResponseAdapter, MyLibMyMutation_ResponseAdapterCreateTodo, MyLibMyMutation_ResponseAdapterData, MyLibMyMutation_VariablesAdapter, MyLibMyQuery_ResponseAdapter, MyLibMyQuery_ResponseAdapterData, MyLibMyQuery_ResponseAdapterItem, MyLibMyQuery_ResponseAdapterListTodos, MyLibMySubscription_ResponseAdapter, MyLibMySubscription_ResponseAdapterData, MyLibMySubscription_ResponseAdapterOnCreateTodo, MyLibMyMutationSelections, MyLibApollo_apiCompiledSelection, MyLibMyQuerySelections, MyLibMySubscriptionSelections, MyLibKotlinThrowable, MyLibKotlinException, MyLibApollo_apiExecutableVariables, MyLibApollo_apiCompiledFieldBuilder, MyLibApollo_apiCompiledArgument, MyLibApollo_apiCompiledCondition, MyLibApollo_apiCompiledType, MyLibApollo_apiJsonNumber, MyLibApollo_apiCustomScalarAdaptersKey, MyLibApollo_apiCustomScalarAdaptersBuilder, MyLibApollo_apiAdapterContext, MyLibApollo_apiOptionalCompanion, MyLibApollo_apiCompiledNamedType, MyLibApollo_apiInterfaceType, MyLibApollo_apiObjectTypeBuilder, MyLibKotlinNothing, MyLibApollo_apiJsonReaderToken, MyLibApollo_apiAdapterContextBuilder, MyLibApollo_apiInterfaceTypeBuilder, MyLibKotlinByteArray, MyLibOkioByteString, MyLibOkioBuffer, MyLibOkioTimeout, MyLibApollo_apiCustomTypeValue<T>, MyLibApollo_apiDeferredFragmentIdentifier, MyLibKotlinByteIterator, MyLibOkioByteStringCompanion, MyLibOkioBufferUnsafeCursor, MyLibOkioTimeoutCompanion, MyLibApollo_apiCustomTypeValueCompanion;

@protocol MyLibApollo_apiAdapter, MyLibApollo_apiJsonWriter, MyLibApollo_apiExecutable, MyLibApollo_apiOperation, MyLibApollo_apiMutation, MyLibApollo_apiExecutableData, MyLibApollo_apiOperationData, MyLibApollo_apiMutationData, MyLibApollo_apiQuery, MyLibApollo_apiQueryData, MyLibApollo_apiSubscription, MyLibApollo_apiSubscriptionData, MyLibKotlinComparable, MyLibApollo_apiJsonReader, MyLibApollo_apiUpload, MyLibOkioCloseable, MyLibApollo_apiExecutionContextKey, MyLibApollo_apiExecutionContextElement, MyLibApollo_apiExecutionContext, MyLibKotlinIterator, MyLibOkioBufferedSink, MyLibApollo_apiCustomTypeAdapter, MyLibOkioSource, MyLibOkioSink, MyLibOkioBufferedSource;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface MyLibBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface MyLibBase (MyLibBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface MyLibMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MyLibMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorMyLibKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface MyLibNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface MyLibByte : MyLibNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface MyLibUByte : MyLibNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface MyLibShort : MyLibNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface MyLibUShort : MyLibNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface MyLibInt : MyLibNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface MyLibUInt : MyLibNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface MyLibLong : MyLibNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface MyLibULong : MyLibNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface MyLibFloat : MyLibNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface MyLibDouble : MyLibNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface MyLibBoolean : MyLibNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("Apollo_apiExecutable")))
@protocol MyLibApollo_apiExecutable
@required
- (id<MyLibApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (MyLibApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
@end

__attribute__((swift_name("Apollo_apiOperation")))
@protocol MyLibApollo_apiOperation <MyLibApollo_apiExecutable>
@required
- (NSString *)document __attribute__((swift_name("document()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name __attribute__((swift_name("name()")));
@end

__attribute__((swift_name("Apollo_apiMutation")))
@protocol MyLibApollo_apiMutation <MyLibApollo_apiOperation>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyMutation")))
@interface MyLibMyMutation : MyLibBase <MyLibApollo_apiMutation>
- (instancetype)initWithCondition:(MyLibApollo_apiOptional<MyLibModelTodoConditionInput *> *)condition input:(MyLibCreateTodoInput *)input __attribute__((swift_name("init(condition:input:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MyLibMyMutationCompanion *companion __attribute__((swift_name("companion")));
- (id<MyLibApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (MyLibMyMutation *)doCopyCondition:(MyLibApollo_apiOptional<MyLibModelTodoConditionInput *> *)condition input:(MyLibCreateTodoInput *)input __attribute__((swift_name("doCopy(condition:input:)")));
- (NSString *)document __attribute__((swift_name("document()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name __attribute__((swift_name("name()")));
- (MyLibApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MyLibApollo_apiOptional<MyLibModelTodoConditionInput *> *condition __attribute__((swift_name("condition")));
@property (readonly) MyLibCreateTodoInput *input __attribute__((swift_name("input")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyMutation.Companion")))
@interface MyLibMyMutationCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibMyMutationCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *OPERATION_DOCUMENT __attribute__((swift_name("OPERATION_DOCUMENT")));
@property (readonly) NSString *OPERATION_ID __attribute__((swift_name("OPERATION_ID")));
@property (readonly) NSString *OPERATION_NAME __attribute__((swift_name("OPERATION_NAME")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyMutation.CreateTodo")))
@interface MyLibMyMutationCreateTodo : MyLibBase
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (MyLibMyMutationCreateTodo *)doCopyId:(NSString *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end

__attribute__((swift_name("Apollo_apiExecutableData")))
@protocol MyLibApollo_apiExecutableData
@required
@end

__attribute__((swift_name("Apollo_apiOperationData")))
@protocol MyLibApollo_apiOperationData <MyLibApollo_apiExecutableData>
@required
@end

__attribute__((swift_name("Apollo_apiMutationData")))
@protocol MyLibApollo_apiMutationData <MyLibApollo_apiOperationData>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyMutation.Data")))
@interface MyLibMyMutationData : MyLibBase <MyLibApollo_apiMutationData>
- (instancetype)initWithCreateTodo:(MyLibMyMutationCreateTodo * _Nullable)createTodo __attribute__((swift_name("init(createTodo:)"))) __attribute__((objc_designated_initializer));
- (MyLibMyMutationData *)doCopyCreateTodo:(MyLibMyMutationCreateTodo * _Nullable)createTodo __attribute__((swift_name("doCopy(createTodo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MyLibMyMutationCreateTodo * _Nullable createTodo __attribute__((swift_name("createTodo")));
@end

__attribute__((swift_name("Apollo_apiQuery")))
@protocol MyLibApollo_apiQuery <MyLibApollo_apiOperation>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyQuery")))
@interface MyLibMyQuery : MyLibBase <MyLibApollo_apiQuery>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MyLibMyQueryCompanion *companion __attribute__((swift_name("companion")));
- (id<MyLibApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (NSString *)document __attribute__((swift_name("document()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name __attribute__((swift_name("name()")));
- (MyLibApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyQuery.Companion")))
@interface MyLibMyQueryCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibMyQueryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *OPERATION_DOCUMENT __attribute__((swift_name("OPERATION_DOCUMENT")));
@property (readonly) NSString *OPERATION_ID __attribute__((swift_name("OPERATION_ID")));
@property (readonly) NSString *OPERATION_NAME __attribute__((swift_name("OPERATION_NAME")));
@end

__attribute__((swift_name("Apollo_apiQueryData")))
@protocol MyLibApollo_apiQueryData <MyLibApollo_apiOperationData>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyQuery.Data")))
@interface MyLibMyQueryData : MyLibBase <MyLibApollo_apiQueryData>
- (instancetype)initWithListTodos:(MyLibMyQueryListTodos * _Nullable)listTodos __attribute__((swift_name("init(listTodos:)"))) __attribute__((objc_designated_initializer));
- (MyLibMyQueryData *)doCopyListTodos:(MyLibMyQueryListTodos * _Nullable)listTodos __attribute__((swift_name("doCopy(listTodos:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MyLibMyQueryListTodos * _Nullable listTodos __attribute__((swift_name("listTodos")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyQuery.Item")))
@interface MyLibMyQueryItem : MyLibBase
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (MyLibMyQueryItem *)doCopyId:(NSString *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyQuery.ListTodos")))
@interface MyLibMyQueryListTodos : MyLibBase
- (instancetype)initWithItems:(NSArray<id> *)items __attribute__((swift_name("init(items:)"))) __attribute__((objc_designated_initializer));
- (MyLibMyQueryListTodos *)doCopyItems:(NSArray<id> *)items __attribute__((swift_name("doCopy(items:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSArray<MyLibMyQueryItem *> *)itemsFilterNotNull __attribute__((swift_name("itemsFilterNotNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *items __attribute__((swift_name("items")));
@end

__attribute__((swift_name("Apollo_apiSubscription")))
@protocol MyLibApollo_apiSubscription <MyLibApollo_apiOperation>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MySubscription")))
@interface MyLibMySubscription : MyLibBase <MyLibApollo_apiSubscription>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MyLibMySubscriptionCompanion *companion __attribute__((swift_name("companion")));
- (id<MyLibApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (NSString *)document __attribute__((swift_name("document()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name __attribute__((swift_name("name()")));
- (MyLibApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MySubscription.Companion")))
@interface MyLibMySubscriptionCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibMySubscriptionCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *OPERATION_DOCUMENT __attribute__((swift_name("OPERATION_DOCUMENT")));
@property (readonly) NSString *OPERATION_ID __attribute__((swift_name("OPERATION_ID")));
@property (readonly) NSString *OPERATION_NAME __attribute__((swift_name("OPERATION_NAME")));
@end

__attribute__((swift_name("Apollo_apiSubscriptionData")))
@protocol MyLibApollo_apiSubscriptionData <MyLibApollo_apiOperationData>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MySubscription.Data")))
@interface MyLibMySubscriptionData : MyLibBase <MyLibApollo_apiSubscriptionData>
- (instancetype)initWithOnCreateTodo:(MyLibMySubscriptionOnCreateTodo * _Nullable)onCreateTodo __attribute__((swift_name("init(onCreateTodo:)"))) __attribute__((objc_designated_initializer));
- (MyLibMySubscriptionData *)doCopyOnCreateTodo:(MyLibMySubscriptionOnCreateTodo * _Nullable)onCreateTodo __attribute__((swift_name("doCopy(onCreateTodo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MyLibMySubscriptionOnCreateTodo * _Nullable onCreateTodo __attribute__((swift_name("onCreateTodo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MySubscription.OnCreateTodo")))
@interface MyLibMySubscriptionOnCreateTodo : MyLibBase
- (instancetype)initWithId:(NSString *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (MyLibMySubscriptionOnCreateTodo *)doCopyId:(NSString *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateTodoInput")))
@interface MyLibCreateTodoInput : MyLibBase
- (instancetype)initWithDescription:(MyLibApollo_apiOptional<NSString *> *)description id:(MyLibApollo_apiOptional<NSString *> *)id name:(NSString *)name __attribute__((swift_name("init(description:id:name:)"))) __attribute__((objc_designated_initializer));
- (MyLibCreateTodoInput *)doCopyDescription:(MyLibApollo_apiOptional<NSString *> *)description id:(MyLibApollo_apiOptional<NSString *> *)id name:(NSString *)name __attribute__((swift_name("doCopy(description:id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MyLibApollo_apiOptional<NSString *> *description_ __attribute__((swift_name("description_")));
@property (readonly) MyLibApollo_apiOptional<NSString *> *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLBoolean")))
@interface MyLibGraphQLBoolean : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MyLibGraphQLBooleanCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLBoolean.Companion")))
@interface MyLibGraphQLBooleanCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibGraphQLBooleanCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MyLibApollo_apiCustomScalarType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLFloat")))
@interface MyLibGraphQLFloat : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MyLibGraphQLFloatCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLFloat.Companion")))
@interface MyLibGraphQLFloatCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibGraphQLFloatCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MyLibApollo_apiCustomScalarType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLID")))
@interface MyLibGraphQLID : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MyLibGraphQLIDCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLID.Companion")))
@interface MyLibGraphQLIDCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibGraphQLIDCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MyLibApollo_apiCustomScalarType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLInt")))
@interface MyLibGraphQLInt : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MyLibGraphQLIntCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLInt.Companion")))
@interface MyLibGraphQLIntCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibGraphQLIntCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MyLibApollo_apiCustomScalarType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLString")))
@interface MyLibGraphQLString : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MyLibGraphQLStringCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLString.Companion")))
@interface MyLibGraphQLStringCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibGraphQLStringCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MyLibApollo_apiCustomScalarType *type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol MyLibKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface MyLibKotlinEnum<E> : MyLibBase <MyLibKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MyLibKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=name_) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelAttributeTypes")))
@interface MyLibModelAttributeTypes : MyLibKotlinEnum<MyLibModelAttributeTypes *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MyLibModelAttributeTypesCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MyLibModelAttributeTypes *Null __attribute__((swift_name("Null")));
@property (class, readonly) MyLibModelAttributeTypes *binary __attribute__((swift_name("binary")));
@property (class, readonly) MyLibModelAttributeTypes *binaryset __attribute__((swift_name("binaryset")));
@property (class, readonly) MyLibModelAttributeTypes *bool_ __attribute__((swift_name("bool_")));
@property (class, readonly) MyLibModelAttributeTypes *list __attribute__((swift_name("list")));
@property (class, readonly) MyLibModelAttributeTypes *map __attribute__((swift_name("map")));
@property (class, readonly) MyLibModelAttributeTypes *number __attribute__((swift_name("number")));
@property (class, readonly) MyLibModelAttributeTypes *numberset __attribute__((swift_name("numberset")));
@property (class, readonly) MyLibModelAttributeTypes *string __attribute__((swift_name("string")));
@property (class, readonly) MyLibModelAttributeTypes *stringset __attribute__((swift_name("stringset")));
@property (class, readonly) MyLibModelAttributeTypes *unknown __attribute__((swift_name("unknown")));
+ (MyLibKotlinArray<MyLibModelAttributeTypes *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelAttributeTypes.Companion")))
@interface MyLibModelAttributeTypesCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibModelAttributeTypesCompanion *shared __attribute__((swift_name("shared")));
- (MyLibKotlinArray<MyLibModelAttributeTypes *> *)knownValues __attribute__((swift_name("knownValues()")));
- (MyLibModelAttributeTypes *)safeValueOfRawValue:(NSString *)rawValue __attribute__((swift_name("safeValueOf(rawValue:)")));
@property (readonly) MyLibApollo_apiEnumType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelSizeInput")))
@interface MyLibModelSizeInput : MyLibBase
- (instancetype)initWithBetween:(MyLibApollo_apiOptional<NSArray<id> *> *)between eq:(MyLibApollo_apiOptional<MyLibInt *> *)eq ge:(MyLibApollo_apiOptional<MyLibInt *> *)ge gt:(MyLibApollo_apiOptional<MyLibInt *> *)gt le:(MyLibApollo_apiOptional<MyLibInt *> *)le lt:(MyLibApollo_apiOptional<MyLibInt *> *)lt ne:(MyLibApollo_apiOptional<MyLibInt *> *)ne __attribute__((swift_name("init(between:eq:ge:gt:le:lt:ne:)"))) __attribute__((objc_designated_initializer));
- (MyLibModelSizeInput *)doCopyBetween:(MyLibApollo_apiOptional<NSArray<id> *> *)between eq:(MyLibApollo_apiOptional<MyLibInt *> *)eq ge:(MyLibApollo_apiOptional<MyLibInt *> *)ge gt:(MyLibApollo_apiOptional<MyLibInt *> *)gt le:(MyLibApollo_apiOptional<MyLibInt *> *)le lt:(MyLibApollo_apiOptional<MyLibInt *> *)lt ne:(MyLibApollo_apiOptional<MyLibInt *> *)ne __attribute__((swift_name("doCopy(between:eq:ge:gt:le:lt:ne:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MyLibApollo_apiOptional<NSArray<id> *> *between __attribute__((swift_name("between")));
@property (readonly) MyLibApollo_apiOptional<MyLibInt *> *eq __attribute__((swift_name("eq")));
@property (readonly) MyLibApollo_apiOptional<MyLibInt *> *ge __attribute__((swift_name("ge")));
@property (readonly) MyLibApollo_apiOptional<MyLibInt *> *gt __attribute__((swift_name("gt")));
@property (readonly) MyLibApollo_apiOptional<MyLibInt *> *le __attribute__((swift_name("le")));
@property (readonly) MyLibApollo_apiOptional<MyLibInt *> *lt __attribute__((swift_name("lt")));
@property (readonly) MyLibApollo_apiOptional<MyLibInt *> *ne __attribute__((swift_name("ne")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelStringInput")))
@interface MyLibModelStringInput : MyLibBase
- (instancetype)initWithAttributeExists:(MyLibApollo_apiOptional<MyLibBoolean *> *)attributeExists attributeType:(MyLibApollo_apiOptional<MyLibModelAttributeTypes *> *)attributeType beginsWith:(MyLibApollo_apiOptional<NSString *> *)beginsWith between:(MyLibApollo_apiOptional<NSArray<id> *> *)between contains:(MyLibApollo_apiOptional<NSString *> *)contains eq:(MyLibApollo_apiOptional<NSString *> *)eq ge:(MyLibApollo_apiOptional<NSString *> *)ge gt:(MyLibApollo_apiOptional<NSString *> *)gt le:(MyLibApollo_apiOptional<NSString *> *)le lt:(MyLibApollo_apiOptional<NSString *> *)lt ne:(MyLibApollo_apiOptional<NSString *> *)ne notContains:(MyLibApollo_apiOptional<NSString *> *)notContains size:(MyLibApollo_apiOptional<MyLibModelSizeInput *> *)size __attribute__((swift_name("init(attributeExists:attributeType:beginsWith:between:contains:eq:ge:gt:le:lt:ne:notContains:size:)"))) __attribute__((objc_designated_initializer));
- (MyLibModelStringInput *)doCopyAttributeExists:(MyLibApollo_apiOptional<MyLibBoolean *> *)attributeExists attributeType:(MyLibApollo_apiOptional<MyLibModelAttributeTypes *> *)attributeType beginsWith:(MyLibApollo_apiOptional<NSString *> *)beginsWith between:(MyLibApollo_apiOptional<NSArray<id> *> *)between contains:(MyLibApollo_apiOptional<NSString *> *)contains eq:(MyLibApollo_apiOptional<NSString *> *)eq ge:(MyLibApollo_apiOptional<NSString *> *)ge gt:(MyLibApollo_apiOptional<NSString *> *)gt le:(MyLibApollo_apiOptional<NSString *> *)le lt:(MyLibApollo_apiOptional<NSString *> *)lt ne:(MyLibApollo_apiOptional<NSString *> *)ne notContains:(MyLibApollo_apiOptional<NSString *> *)notContains size:(MyLibApollo_apiOptional<MyLibModelSizeInput *> *)size __attribute__((swift_name("doCopy(attributeExists:attributeType:beginsWith:between:contains:eq:ge:gt:le:lt:ne:notContains:size:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MyLibApollo_apiOptional<MyLibBoolean *> *attributeExists __attribute__((swift_name("attributeExists")));
@property (readonly) MyLibApollo_apiOptional<MyLibModelAttributeTypes *> *attributeType __attribute__((swift_name("attributeType")));
@property (readonly) MyLibApollo_apiOptional<NSString *> *beginsWith __attribute__((swift_name("beginsWith")));
@property (readonly) MyLibApollo_apiOptional<NSArray<id> *> *between __attribute__((swift_name("between")));
@property (readonly) MyLibApollo_apiOptional<NSString *> *contains __attribute__((swift_name("contains")));
@property (readonly) MyLibApollo_apiOptional<NSString *> *eq __attribute__((swift_name("eq")));
@property (readonly) MyLibApollo_apiOptional<NSString *> *ge __attribute__((swift_name("ge")));
@property (readonly) MyLibApollo_apiOptional<NSString *> *gt __attribute__((swift_name("gt")));
@property (readonly) MyLibApollo_apiOptional<NSString *> *le __attribute__((swift_name("le")));
@property (readonly) MyLibApollo_apiOptional<NSString *> *lt __attribute__((swift_name("lt")));
@property (readonly) MyLibApollo_apiOptional<NSString *> *ne __attribute__((swift_name("ne")));
@property (readonly) MyLibApollo_apiOptional<NSString *> *notContains __attribute__((swift_name("notContains")));
@property (readonly) MyLibApollo_apiOptional<MyLibModelSizeInput *> *size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelTodoConditionInput")))
@interface MyLibModelTodoConditionInput : MyLibBase
- (instancetype)initWithAnd:(MyLibApollo_apiOptional<NSArray<id> *> *)and_ description:(MyLibApollo_apiOptional<MyLibModelStringInput *> *)description name:(MyLibApollo_apiOptional<MyLibModelStringInput *> *)name not:(MyLibApollo_apiOptional<MyLibModelTodoConditionInput *> *)not_ or:(MyLibApollo_apiOptional<NSArray<id> *> *)or_ __attribute__((swift_name("init(and:description:name:not:or:)"))) __attribute__((objc_designated_initializer));
- (MyLibModelTodoConditionInput *)doCopyAnd:(MyLibApollo_apiOptional<NSArray<id> *> *)and_ description:(MyLibApollo_apiOptional<MyLibModelStringInput *> *)description name:(MyLibApollo_apiOptional<MyLibModelStringInput *> *)name not:(MyLibApollo_apiOptional<MyLibModelTodoConditionInput *> *)not_ or:(MyLibApollo_apiOptional<NSArray<id> *> *)or_ __attribute__((swift_name("doCopy(and:description:name:not:or:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=and) MyLibApollo_apiOptional<NSArray<id> *> *and_ __attribute__((swift_name("and_")));
@property (readonly) MyLibApollo_apiOptional<MyLibModelStringInput *> *description_ __attribute__((swift_name("description_")));
@property (readonly) MyLibApollo_apiOptional<MyLibModelStringInput *> *name __attribute__((swift_name("name")));
@property (readonly, getter=not) MyLibApollo_apiOptional<MyLibModelTodoConditionInput *> *not_ __attribute__((swift_name("not_")));
@property (readonly, getter=or) MyLibApollo_apiOptional<NSArray<id> *> *or_ __attribute__((swift_name("or_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelTodoConnection")))
@interface MyLibModelTodoConnection : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MyLibModelTodoConnectionCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelTodoConnection.Companion")))
@interface MyLibModelTodoConnectionCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibModelTodoConnectionCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MyLibApollo_apiObjectType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mutation")))
@interface MyLibMutation : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MyLibMutationCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mutation.Companion")))
@interface MyLibMutationCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibMutationCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MyLibApollo_apiObjectType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Query")))
@interface MyLibQuery : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MyLibQueryCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Query.Companion")))
@interface MyLibQueryCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibQueryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MyLibApollo_apiObjectType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Subscription")))
@interface MyLibSubscription : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MyLibSubscriptionCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Subscription.Companion")))
@interface MyLibSubscriptionCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibSubscriptionCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MyLibApollo_apiObjectType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Todo")))
@interface MyLibTodo : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MyLibTodoCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Todo.Companion")))
@interface MyLibTodoCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibTodoCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MyLibApollo_apiObjectType *type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Apollo_apiAdapter")))
@protocol MyLibApollo_apiAdapter
@required

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id _Nullable)fromJsonReader:(id<MyLibApollo_apiJsonReader>)reader customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters value:(id _Nullable)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateTodoInput_InputAdapter")))
@interface MyLibCreateTodoInput_InputAdapter : MyLibBase <MyLibApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)createTodoInput_InputAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibCreateTodoInput_InputAdapter *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (MyLibCreateTodoInput * _Nullable)fromJsonReader:(id<MyLibApollo_apiJsonReader>)reader customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters value:(MyLibCreateTodoInput *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelAttributeTypes_ResponseAdapter")))
@interface MyLibModelAttributeTypes_ResponseAdapter : MyLibBase <MyLibApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)modelAttributeTypes_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibModelAttributeTypes_ResponseAdapter *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (MyLibModelAttributeTypes * _Nullable)fromJsonReader:(id<MyLibApollo_apiJsonReader>)reader customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters value:(MyLibModelAttributeTypes *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelSizeInput_InputAdapter")))
@interface MyLibModelSizeInput_InputAdapter : MyLibBase <MyLibApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)modelSizeInput_InputAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibModelSizeInput_InputAdapter *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (MyLibModelSizeInput * _Nullable)fromJsonReader:(id<MyLibApollo_apiJsonReader>)reader customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters value:(MyLibModelSizeInput *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelStringInput_InputAdapter")))
@interface MyLibModelStringInput_InputAdapter : MyLibBase <MyLibApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)modelStringInput_InputAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibModelStringInput_InputAdapter *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (MyLibModelStringInput * _Nullable)fromJsonReader:(id<MyLibApollo_apiJsonReader>)reader customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters value:(MyLibModelStringInput *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelTodoConditionInput_InputAdapter")))
@interface MyLibModelTodoConditionInput_InputAdapter : MyLibBase <MyLibApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)modelTodoConditionInput_InputAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibModelTodoConditionInput_InputAdapter *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (MyLibModelTodoConditionInput * _Nullable)fromJsonReader:(id<MyLibApollo_apiJsonReader>)reader customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters value:(MyLibModelTodoConditionInput *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyMutation_ResponseAdapter")))
@interface MyLibMyMutation_ResponseAdapter : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)myMutation_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibMyMutation_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyMutation_ResponseAdapter.CreateTodo")))
@interface MyLibMyMutation_ResponseAdapterCreateTodo : MyLibBase <MyLibApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)createTodo __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibMyMutation_ResponseAdapterCreateTodo *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (MyLibMyMutationCreateTodo * _Nullable)fromJsonReader:(id<MyLibApollo_apiJsonReader>)reader customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters value:(MyLibMyMutationCreateTodo *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyMutation_ResponseAdapter.Data")))
@interface MyLibMyMutation_ResponseAdapterData : MyLibBase <MyLibApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibMyMutation_ResponseAdapterData *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (MyLibMyMutationData * _Nullable)fromJsonReader:(id<MyLibApollo_apiJsonReader>)reader customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters value:(MyLibMyMutationData *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyMutation_VariablesAdapter")))
@interface MyLibMyMutation_VariablesAdapter : MyLibBase <MyLibApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)myMutation_VariablesAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibMyMutation_VariablesAdapter *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (MyLibMyMutation * _Nullable)fromJsonReader:(id<MyLibApollo_apiJsonReader>)reader customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters value:(MyLibMyMutation *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyQuery_ResponseAdapter")))
@interface MyLibMyQuery_ResponseAdapter : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)myQuery_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibMyQuery_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyQuery_ResponseAdapter.Data")))
@interface MyLibMyQuery_ResponseAdapterData : MyLibBase <MyLibApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibMyQuery_ResponseAdapterData *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (MyLibMyQueryData * _Nullable)fromJsonReader:(id<MyLibApollo_apiJsonReader>)reader customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters value:(MyLibMyQueryData *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyQuery_ResponseAdapter.Item")))
@interface MyLibMyQuery_ResponseAdapterItem : MyLibBase <MyLibApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)item __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibMyQuery_ResponseAdapterItem *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (MyLibMyQueryItem * _Nullable)fromJsonReader:(id<MyLibApollo_apiJsonReader>)reader customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters value:(MyLibMyQueryItem *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyQuery_ResponseAdapter.ListTodos")))
@interface MyLibMyQuery_ResponseAdapterListTodos : MyLibBase <MyLibApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)listTodos __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibMyQuery_ResponseAdapterListTodos *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (MyLibMyQueryListTodos * _Nullable)fromJsonReader:(id<MyLibApollo_apiJsonReader>)reader customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters value:(MyLibMyQueryListTodos *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MySubscription_ResponseAdapter")))
@interface MyLibMySubscription_ResponseAdapter : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mySubscription_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibMySubscription_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MySubscription_ResponseAdapter.Data")))
@interface MyLibMySubscription_ResponseAdapterData : MyLibBase <MyLibApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibMySubscription_ResponseAdapterData *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (MyLibMySubscriptionData * _Nullable)fromJsonReader:(id<MyLibApollo_apiJsonReader>)reader customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters value:(MyLibMySubscriptionData *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MySubscription_ResponseAdapter.OnCreateTodo")))
@interface MyLibMySubscription_ResponseAdapterOnCreateTodo : MyLibBase <MyLibApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onCreateTodo __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibMySubscription_ResponseAdapterOnCreateTodo *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (MyLibMySubscriptionOnCreateTodo * _Nullable)fromJsonReader:(id<MyLibApollo_apiJsonReader>)reader customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<MyLibApollo_apiJsonWriter>)writer customScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters value:(MyLibMySubscriptionOnCreateTodo *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyMutationSelections")))
@interface MyLibMyMutationSelections : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)myMutationSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibMyMutationSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<MyLibApollo_apiCompiledSelection *> *__root __attribute__((swift_name("__root")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyQuerySelections")))
@interface MyLibMyQuerySelections : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)myQuerySelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibMyQuerySelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<MyLibApollo_apiCompiledSelection *> *__root __attribute__((swift_name("__root")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MySubscriptionSelections")))
@interface MyLibMySubscriptionSelections : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mySubscriptionSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibMySubscriptionSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<MyLibApollo_apiCompiledSelection *> *__root __attribute__((swift_name("__root")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Api")))
@interface MyLibApi : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)callMutationName:(NSString *)name __attribute__((swift_name("callMutation(name:)")));
- (NSString *)callQuery __attribute__((swift_name("callQuery()")));
- (NSString *)callSubscription __attribute__((swift_name("callSubscription()")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface MyLibKotlinThrowable : MyLibBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MyLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MyLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (MyLibKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MyLibKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface MyLibKotlinException : MyLibKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MyLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MyLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("OkioIOException")))
@interface MyLibOkioIOException : MyLibKotlinException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MyLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithCause:(MyLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("Apollo_apiCompiledSelection")))
@interface MyLibApollo_apiCompiledSelection : MyLibBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledField")))
@interface MyLibApollo_apiCompiledField : MyLibApollo_apiCompiledSelection
- (NSString *)nameWithArgumentsVariables:(MyLibApollo_apiExecutableVariables *)variables __attribute__((swift_name("nameWithArguments(variables:)")));
- (MyLibApollo_apiCompiledFieldBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
- (id _Nullable)resolveArgumentName:(NSString *)name variables:(MyLibApollo_apiExecutableVariables *)variables __attribute__((swift_name("resolveArgument(name:variables:)")));
@property (readonly) NSString * _Nullable alias __attribute__((swift_name("alias")));
@property (readonly) NSArray<MyLibApollo_apiCompiledArgument *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) NSArray<MyLibApollo_apiCompiledCondition *> *condition __attribute__((swift_name("condition")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *responseName __attribute__((swift_name("responseName")));
@property (readonly) NSArray<MyLibApollo_apiCompiledSelection *> *selections __attribute__((swift_name("selections")));
@property (readonly) MyLibApollo_apiCompiledType *type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("OkioCloseable")))
@protocol MyLibOkioCloseable
@required

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Apollo_apiJsonWriter")))
@protocol MyLibApollo_apiJsonWriter <MyLibOkioCloseable>
@required

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)beginArrayAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("beginArray()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)beginObjectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("beginObject()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)endArrayAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("endArray()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)endObjectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("endObject()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)flushAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("flush()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)nameName:(NSString *)name error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("name(name:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)nullValueAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nullValue()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)valueValue:(id<MyLibApollo_apiUpload>)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)valueValue:(MyLibApollo_apiJsonNumber *)value error_:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value_:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)valueValue:(BOOL)value error__:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value__:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)valueValue:(double)value error___:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value___:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)valueValue:(int32_t)value error____:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value____:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)valueValue:(int64_t)value error_____:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value_____:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonWriter> _Nullable)valueValue:(NSString *)value error______:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value______:)")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@end

__attribute__((swift_name("Apollo_apiExecutionContext")))
@protocol MyLibApollo_apiExecutionContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<MyLibApollo_apiExecutionContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<MyLibApollo_apiExecutionContextElement> _Nullable)getKey:(id<MyLibApollo_apiExecutionContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<MyLibApollo_apiExecutionContext>)minusKeyKey:(id<MyLibApollo_apiExecutionContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<MyLibApollo_apiExecutionContext>)plusContext:(id<MyLibApollo_apiExecutionContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Apollo_apiExecutionContextElement")))
@protocol MyLibApollo_apiExecutionContextElement <MyLibApollo_apiExecutionContext>
@required
@property (readonly) id<MyLibApollo_apiExecutionContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarAdapters")))
@interface MyLibApollo_apiCustomScalarAdapters : MyLibBase <MyLibApollo_apiExecutionContextElement>
@property (class, readonly, getter=companion) MyLibApollo_apiCustomScalarAdaptersKey *companion __attribute__((swift_name("companion")));
- (MyLibApollo_apiCustomScalarAdaptersBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
- (id<MyLibApollo_apiAdapter>)responseAdapterForCustomScalar:(MyLibApollo_apiCustomScalarType *)customScalar __attribute__((swift_name("responseAdapterFor(customScalar:)")));
- (NSSet<NSString *> *)variables __attribute__((swift_name("variables()"))) __attribute__((deprecated("Use adapterContext.variables() instead")));
@property (readonly) MyLibApollo_apiAdapterContext *adapterContext __attribute__((swift_name("adapterContext")));
@property (readonly) id<MyLibApollo_apiExecutionContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Apollo_apiOptional")))
@interface MyLibApollo_apiOptional<__covariant V> : MyLibBase
@property (class, readonly, getter=companion) MyLibApollo_apiOptionalCompanion *companion __attribute__((swift_name("companion")));
- (V _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (V)getOrThrow __attribute__((swift_name("getOrThrow()")));
@end

__attribute__((swift_name("Apollo_apiCompiledType")))
@interface MyLibApollo_apiCompiledType : MyLibBase
- (MyLibApollo_apiCompiledNamedType *)leafType __attribute__((swift_name("leafType()"))) __attribute__((deprecated("Use rawType instead")));
- (MyLibApollo_apiCompiledNamedType *)rawType __attribute__((swift_name("rawType()")));
@end

__attribute__((swift_name("Apollo_apiCompiledNamedType")))
@interface MyLibApollo_apiCompiledNamedType : MyLibApollo_apiCompiledType
- (MyLibApollo_apiCompiledNamedType *)leafType __attribute__((swift_name("leafType()"))) __attribute__((deprecated("Use rawType instead")));
- (MyLibApollo_apiCompiledNamedType *)rawType __attribute__((swift_name("rawType()")));
@property (readonly, getter=name_) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarType")))
@interface MyLibApollo_apiCustomScalarType : MyLibApollo_apiCompiledNamedType
- (instancetype)initWithName:(NSString *)name className:(NSString *)className __attribute__((swift_name("init(name:className:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *className __attribute__((swift_name("className")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MyLibKotlinEnumCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MyLibKotlinArray<T> : MyLibBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MyLibInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MyLibKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiEnumType")))
@interface MyLibApollo_apiEnumType : MyLibApollo_apiCompiledNamedType
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use the primary constructor instead")));
- (instancetype)initWithName:(NSString *)name values:(NSArray<NSString *> *)values __attribute__((swift_name("init(name:values:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<NSString *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiObjectType")))
@interface MyLibApollo_apiObjectType : MyLibApollo_apiCompiledNamedType
- (instancetype)initWithName:(NSString *)name keyFields:(NSArray<NSString *> *)keyFields implements:(NSArray<MyLibApollo_apiInterfaceType *> *)implements __attribute__((swift_name("init(name:keyFields:implements:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use the Builder instead")));
- (MyLibApollo_apiObjectTypeBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
@property (readonly) NSArray<NSString *> *embeddedFields __attribute__((swift_name("embeddedFields")));
@property (readonly) NSArray<MyLibApollo_apiInterfaceType *> *implements __attribute__((swift_name("implements")));
@property (readonly) NSArray<NSString *> *keyFields __attribute__((swift_name("keyFields")));
@end

__attribute__((swift_name("Apollo_apiJsonReader")))
@protocol MyLibApollo_apiJsonReader <MyLibOkioCloseable>
@required

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonReader> _Nullable)beginArrayAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("beginArray()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonReader> _Nullable)beginObjectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("beginObject()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonReader> _Nullable)endArrayAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("endArray()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<MyLibApollo_apiJsonReader> _Nullable)endObjectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("endObject()")));
- (NSArray<id> *)getPath __attribute__((swift_name("getPath()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)hasNextAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("hasNext()"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)nextBooleanAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextBoolean()"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (double)nextDoubleAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextDouble()"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (int32_t)nextIntAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextInt()"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (int64_t)nextLongAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextLong()"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (NSString * _Nullable)nextNameAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextName()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (MyLibKotlinNothing * _Nullable)nextNullAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextNull()"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (MyLibApollo_apiJsonNumber * _Nullable)nextNumberAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextNumber()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (NSString * _Nullable)nextStringAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextString()"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (MyLibApollo_apiJsonReaderToken * _Nullable)peekAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("peek()")));
- (void)rewind __attribute__((swift_name("rewind()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (int32_t)selectNameNames:(NSArray<NSString *> *)names error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("selectName(names:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)skipValueAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("skipValue()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiExecutableVariables")))
@interface MyLibApollo_apiExecutableVariables : MyLibBase
- (instancetype)initWithValueMap:(NSDictionary<NSString *, id> *)valueMap __attribute__((swift_name("init(valueMap:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSDictionary<NSString *, id> *valueMap __attribute__((swift_name("valueMap")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledField.Builder")))
@interface MyLibApollo_apiCompiledFieldBuilder : MyLibBase
- (instancetype)initWithCompiledField:(MyLibApollo_apiCompiledField *)compiledField __attribute__((swift_name("init(compiledField:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name type:(MyLibApollo_apiCompiledType *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (MyLibApollo_apiCompiledFieldBuilder *)aliasAlias:(NSString * _Nullable)alias __attribute__((swift_name("alias(alias:)")));
- (MyLibApollo_apiCompiledFieldBuilder *)argumentsArguments:(NSArray<MyLibApollo_apiCompiledArgument *> *)arguments __attribute__((swift_name("arguments(arguments:)")));
- (MyLibApollo_apiCompiledField *)build __attribute__((swift_name("build()")));
- (MyLibApollo_apiCompiledFieldBuilder *)conditionCondition:(NSArray<MyLibApollo_apiCompiledCondition *> *)condition __attribute__((swift_name("condition(condition:)")));
- (MyLibApollo_apiCompiledFieldBuilder *)selectionsSelections:(NSArray<MyLibApollo_apiCompiledSelection *> *)selections __attribute__((swift_name("selections(selections:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MyLibApollo_apiCompiledType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledArgument")))
@interface MyLibApollo_apiCompiledArgument : MyLibBase
- (instancetype)initWithName:(NSString *)name value:(id _Nullable)value isKey:(BOOL)isKey __attribute__((swift_name("init(name:value:isKey:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use the Builder instead")));
@property (readonly) BOOL isKey __attribute__((swift_name("isKey")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
@property (readonly) BOOL isPagination __attribute__((swift_name("isPagination")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledCondition")))
@interface MyLibApollo_apiCompiledCondition : MyLibBase
- (instancetype)initWithName:(NSString *)name inverted:(BOOL)inverted __attribute__((swift_name("init(name:inverted:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name inverted:(BOOL)inverted defaultValue:(BOOL)defaultValue __attribute__((swift_name("init(name:inverted:defaultValue:)"))) __attribute__((objc_designated_initializer));
- (MyLibApollo_apiCompiledCondition *)doCopyName:(NSString *)name inverted:(BOOL)inverted __attribute__((swift_name("doCopy(name:inverted:)")));
- (MyLibApollo_apiCompiledCondition *)doCopyName:(NSString *)name inverted:(BOOL)inverted defaultValue:(BOOL)defaultValue __attribute__((swift_name("doCopy(name:inverted:defaultValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL defaultValue __attribute__((swift_name("defaultValue")));
@property (readonly) BOOL inverted __attribute__((swift_name("inverted")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Apollo_apiUpload")))
@protocol MyLibApollo_apiUpload
@required
- (void)writeToSink:(id<MyLibOkioBufferedSink>)sink __attribute__((swift_name("writeTo(sink:)")));
@property (readonly) int64_t contentLength __attribute__((swift_name("contentLength")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@property (readonly) NSString * _Nullable fileName __attribute__((swift_name("fileName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiJsonNumber")))
@interface MyLibApollo_apiJsonNumber : MyLibBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Apollo_apiExecutionContextKey")))
@protocol MyLibApollo_apiExecutionContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarAdapters.Key")))
@interface MyLibApollo_apiCustomScalarAdaptersKey : MyLibBase <MyLibApollo_apiExecutionContextKey>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibApollo_apiCustomScalarAdaptersKey *shared __attribute__((swift_name("shared")));
@property (readonly) MyLibApollo_apiCustomScalarAdapters *Empty __attribute__((swift_name("Empty")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
@property (readonly) MyLibApollo_apiCustomScalarAdapters *PassThrough __attribute__((swift_name("PassThrough")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarAdapters.Builder")))
@interface MyLibApollo_apiCustomScalarAdaptersBuilder : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MyLibApollo_apiCustomScalarAdaptersBuilder *)adapterContextAdapterContext:(MyLibApollo_apiAdapterContext *)adapterContext __attribute__((swift_name("adapterContext(adapterContext:)")));
- (MyLibApollo_apiCustomScalarAdaptersBuilder *)addCustomScalarType:(MyLibApollo_apiCustomScalarType *)customScalarType customScalarAdapter:(id<MyLibApollo_apiAdapter>)customScalarAdapter __attribute__((swift_name("add(customScalarType:customScalarAdapter:)")));
- (MyLibApollo_apiCustomScalarAdaptersBuilder *)addCustomScalarType:(MyLibApollo_apiCustomScalarType *)customScalarType customTypeAdapter:(id<MyLibApollo_apiCustomTypeAdapter>)customTypeAdapter __attribute__((swift_name("add(customScalarType:customTypeAdapter:)"))) __attribute__((deprecated("Used for backward compatibility with 2.x")));
- (MyLibApollo_apiCustomScalarAdaptersBuilder *)addAllCustomScalarAdapters:(MyLibApollo_apiCustomScalarAdapters *)customScalarAdapters __attribute__((swift_name("addAll(customScalarAdapters:)")));
- (MyLibApollo_apiCustomScalarAdapters *)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
- (MyLibApollo_apiCustomScalarAdaptersBuilder *)unsafeUnsafe:(BOOL)unsafe __attribute__((swift_name("unsafe(unsafe:)")));
- (MyLibApollo_apiCustomScalarAdaptersBuilder *)variablesVariables:(MyLibApollo_apiExecutableVariables *)variables __attribute__((swift_name("variables(variables:)"))) __attribute__((deprecated("Use AdapterContext.Builder.variables() instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiAdapterContext")))
@interface MyLibApollo_apiAdapterContext : MyLibBase
- (BOOL)hasDeferredFragmentPath:(NSArray<id> *)path label:(NSString * _Nullable)label __attribute__((swift_name("hasDeferredFragment(path:label:)")));
- (MyLibApollo_apiAdapterContextBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
- (NSSet<NSString *> *)variables __attribute__((swift_name("variables()")));
@property (readonly) BOOL serializeVariablesWithDefaultBooleanValues __attribute__((swift_name("serializeVariablesWithDefaultBooleanValues")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiOptionalCompanion")))
@interface MyLibApollo_apiOptionalCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibApollo_apiOptionalCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (MyLibApollo_apiOptional<id> *)absent __attribute__((swift_name("absent()")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (MyLibApollo_apiOptional<id> *)presentValue:(id _Nullable)value __attribute__((swift_name("present(value:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (MyLibApollo_apiOptional<id> *)presentIfNotNullValue:(id _Nullable)value __attribute__((swift_name("presentIfNotNull(value:)")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol MyLibKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext_()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiInterfaceType")))
@interface MyLibApollo_apiInterfaceType : MyLibApollo_apiCompiledNamedType
- (instancetype)initWithName:(NSString *)name keyFields:(NSArray<NSString *> *)keyFields implements:(NSArray<MyLibApollo_apiInterfaceType *> *)implements __attribute__((swift_name("init(name:keyFields:implements:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use the Builder instead")));
- (MyLibApollo_apiInterfaceTypeBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
@property (readonly) NSArray<NSString *> *embeddedFields __attribute__((swift_name("embeddedFields")));
@property (readonly) NSArray<MyLibApollo_apiInterfaceType *> *implements __attribute__((swift_name("implements")));
@property (readonly) NSArray<NSString *> *keyFields __attribute__((swift_name("keyFields")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiObjectType.Builder")))
@interface MyLibApollo_apiObjectTypeBuilder : MyLibBase
- (instancetype)initWithObjectType:(MyLibApollo_apiObjectType *)objectType __attribute__((swift_name("init(objectType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (MyLibApollo_apiObjectType *)build __attribute__((swift_name("build()")));
- (MyLibApollo_apiObjectTypeBuilder *)embeddedFieldsEmbeddedFields:(NSArray<NSString *> *)embeddedFields __attribute__((swift_name("embeddedFields(embeddedFields:)")));
- (MyLibApollo_apiObjectTypeBuilder *)interfacesImplements:(NSArray<MyLibApollo_apiInterfaceType *> *)implements __attribute__((swift_name("interfaces(implements:)")));
- (MyLibApollo_apiObjectTypeBuilder *)keyFieldsKeyFields:(NSArray<NSString *> *)keyFields __attribute__((swift_name("keyFields(keyFields:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MyLibKotlinNothing : MyLibBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiJsonReaderToken")))
@interface MyLibApollo_apiJsonReaderToken : MyLibKotlinEnum<MyLibApollo_apiJsonReaderToken *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MyLibApollo_apiJsonReaderToken *beginArray __attribute__((swift_name("beginArray")));
@property (class, readonly) MyLibApollo_apiJsonReaderToken *endArray __attribute__((swift_name("endArray")));
@property (class, readonly) MyLibApollo_apiJsonReaderToken *beginObject __attribute__((swift_name("beginObject")));
@property (class, readonly) MyLibApollo_apiJsonReaderToken *endObject __attribute__((swift_name("endObject")));
@property (class, readonly) MyLibApollo_apiJsonReaderToken *name __attribute__((swift_name("name")));
@property (class, readonly) MyLibApollo_apiJsonReaderToken *string __attribute__((swift_name("string")));
@property (class, readonly) MyLibApollo_apiJsonReaderToken *number __attribute__((swift_name("number")));
@property (class, readonly) MyLibApollo_apiJsonReaderToken *long_ __attribute__((swift_name("long_")));
@property (class, readonly) MyLibApollo_apiJsonReaderToken *boolean __attribute__((swift_name("boolean")));
@property (class, readonly) MyLibApollo_apiJsonReaderToken *null __attribute__((swift_name("null")));
@property (class, readonly) MyLibApollo_apiJsonReaderToken *endDocument __attribute__((swift_name("endDocument")));
@property (class, readonly) MyLibApollo_apiJsonReaderToken *any __attribute__((swift_name("any")));
+ (MyLibKotlinArray<MyLibApollo_apiJsonReaderToken *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("OkioSink")))
@protocol MyLibOkioSink <MyLibOkioCloseable>
@required

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)flushAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("flush()")));
- (MyLibOkioTimeout *)timeout __attribute__((swift_name("timeout()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)writeSource:(MyLibOkioBuffer *)source byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("write(source:byteCount_:)")));
@end

__attribute__((swift_name("OkioBufferedSink")))
@protocol MyLibOkioBufferedSink <MyLibOkioSink>
@required
- (id<MyLibOkioBufferedSink>)emit __attribute__((swift_name("emit()")));
- (id<MyLibOkioBufferedSink>)emitCompleteSegments __attribute__((swift_name("emitCompleteSegments()")));
- (id<MyLibOkioBufferedSink>)writeSource:(MyLibKotlinByteArray *)source __attribute__((swift_name("write(source:)")));
- (id<MyLibOkioBufferedSink>)writeSource:(MyLibKotlinByteArray *)source offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(source:offset:byteCount:)")));
- (id<MyLibOkioBufferedSink>)writeByteString:(MyLibOkioByteString *)byteString __attribute__((swift_name("write(byteString:)")));
- (id<MyLibOkioBufferedSink>)writeByteString:(MyLibOkioByteString *)byteString offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(byteString:offset:byteCount:)")));
- (id<MyLibOkioBufferedSink>)writeSource:(id<MyLibOkioSource>)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (int64_t)writeAllSource:(id<MyLibOkioSource>)source __attribute__((swift_name("writeAll(source:)")));
- (id<MyLibOkioBufferedSink>)writeByteB:(int32_t)b __attribute__((swift_name("writeByte(b:)")));
- (id<MyLibOkioBufferedSink>)writeDecimalLongV:(int64_t)v __attribute__((swift_name("writeDecimalLong(v:)")));
- (id<MyLibOkioBufferedSink>)writeHexadecimalUnsignedLongV:(int64_t)v __attribute__((swift_name("writeHexadecimalUnsignedLong(v:)")));
- (id<MyLibOkioBufferedSink>)writeIntI:(int32_t)i __attribute__((swift_name("writeInt(i:)")));
- (id<MyLibOkioBufferedSink>)writeIntLeI:(int32_t)i __attribute__((swift_name("writeIntLe(i:)")));
- (id<MyLibOkioBufferedSink>)writeLongV:(int64_t)v __attribute__((swift_name("writeLong(v:)")));
- (id<MyLibOkioBufferedSink>)writeLongLeV:(int64_t)v __attribute__((swift_name("writeLongLe(v:)")));
- (id<MyLibOkioBufferedSink>)writeShortS:(int32_t)s __attribute__((swift_name("writeShort(s:)")));
- (id<MyLibOkioBufferedSink>)writeShortLeS:(int32_t)s __attribute__((swift_name("writeShortLe(s:)")));
- (id<MyLibOkioBufferedSink>)writeUtf8String:(NSString *)string __attribute__((swift_name("writeUtf8(string:)")));
- (id<MyLibOkioBufferedSink>)writeUtf8String:(NSString *)string beginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("writeUtf8(string:beginIndex:endIndex:)")));
- (id<MyLibOkioBufferedSink>)writeUtf8CodePointCodePoint:(int32_t)codePoint __attribute__((swift_name("writeUtf8CodePoint(codePoint:)")));
@property (readonly) MyLibOkioBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((swift_name("Apollo_apiCustomTypeAdapter")))
@protocol MyLibApollo_apiCustomTypeAdapter
@required
- (id _Nullable)decodeValue:(MyLibApollo_apiCustomTypeValue<id> *)value __attribute__((swift_name("decode(value:)")));
- (MyLibApollo_apiCustomTypeValue<id> *)encodeValue:(id _Nullable)value __attribute__((swift_name("encode(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiAdapterContext.Builder")))
@interface MyLibApollo_apiAdapterContextBuilder : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MyLibApollo_apiAdapterContext *)build __attribute__((swift_name("build()")));
- (MyLibApollo_apiAdapterContextBuilder *)mergedDeferredFragmentIdsMergedDeferredFragmentIds:(NSSet<MyLibApollo_apiDeferredFragmentIdentifier *> * _Nullable)mergedDeferredFragmentIds __attribute__((swift_name("mergedDeferredFragmentIds(mergedDeferredFragmentIds:)")));
- (MyLibApollo_apiAdapterContextBuilder *)serializeVariablesWithDefaultBooleanValuesSerializeVariablesWithDefaultBooleanValues:(MyLibBoolean * _Nullable)serializeVariablesWithDefaultBooleanValues __attribute__((swift_name("serializeVariablesWithDefaultBooleanValues(serializeVariablesWithDefaultBooleanValues:)")));
- (MyLibApollo_apiAdapterContextBuilder *)variablesVariables:(MyLibApollo_apiExecutableVariables * _Nullable)variables __attribute__((swift_name("variables(variables:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiInterfaceType.Builder")))
@interface MyLibApollo_apiInterfaceTypeBuilder : MyLibBase
- (instancetype)initWithInterfaceType:(MyLibApollo_apiInterfaceType *)interfaceType __attribute__((swift_name("init(interfaceType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (MyLibApollo_apiInterfaceType *)build __attribute__((swift_name("build()")));
- (MyLibApollo_apiInterfaceTypeBuilder *)embeddedFieldsEmbeddedFields:(NSArray<NSString *> *)embeddedFields __attribute__((swift_name("embeddedFields(embeddedFields:)")));
- (MyLibApollo_apiInterfaceTypeBuilder *)interfacesImplements:(NSArray<MyLibApollo_apiInterfaceType *> *)implements __attribute__((swift_name("interfaces(implements:)")));
- (MyLibApollo_apiInterfaceTypeBuilder *)keyFieldsKeyFields:(NSArray<NSString *> *)keyFields __attribute__((swift_name("keyFields(keyFields:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface MyLibKotlinByteArray : MyLibBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MyLibByte *(^)(MyLibInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MyLibKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("OkioByteString")))
@interface MyLibOkioByteString : MyLibBase <MyLibKotlinComparable>
@property (class, readonly, getter=companion) MyLibOkioByteStringCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)base64 __attribute__((swift_name("base64()")));
- (NSString *)base64Url __attribute__((swift_name("base64Url()")));
- (int32_t)compareToOther:(MyLibOkioByteString *)other __attribute__((swift_name("compareTo(other:)")));
- (void)doCopyIntoOffset:(int32_t)offset target:(MyLibKotlinByteArray *)target targetOffset:(int32_t)targetOffset byteCount:(int32_t)byteCount __attribute__((swift_name("doCopyInto(offset:target:targetOffset:byteCount:)")));
- (BOOL)endsWithSuffix:(MyLibKotlinByteArray *)suffix __attribute__((swift_name("endsWith(suffix:)")));
- (BOOL)endsWithSuffix_:(MyLibOkioByteString *)suffix __attribute__((swift_name("endsWith(suffix_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)hex __attribute__((swift_name("hex()")));
- (MyLibOkioByteString *)hmacSha1Key:(MyLibOkioByteString *)key __attribute__((swift_name("hmacSha1(key:)")));
- (MyLibOkioByteString *)hmacSha256Key:(MyLibOkioByteString *)key __attribute__((swift_name("hmacSha256(key:)")));
- (MyLibOkioByteString *)hmacSha512Key:(MyLibOkioByteString *)key __attribute__((swift_name("hmacSha512(key:)")));
- (int32_t)indexOfOther:(MyLibKotlinByteArray *)other fromIndex:(int32_t)fromIndex __attribute__((swift_name("indexOf(other:fromIndex:)")));
- (int32_t)indexOfOther:(MyLibOkioByteString *)other fromIndex_:(int32_t)fromIndex __attribute__((swift_name("indexOf(other:fromIndex_:)")));
- (int32_t)lastIndexOfOther:(MyLibKotlinByteArray *)other fromIndex:(int32_t)fromIndex __attribute__((swift_name("lastIndexOf(other:fromIndex:)")));
- (int32_t)lastIndexOfOther:(MyLibOkioByteString *)other fromIndex_:(int32_t)fromIndex __attribute__((swift_name("lastIndexOf(other:fromIndex_:)")));
- (MyLibOkioByteString *)md5 __attribute__((swift_name("md5()")));
- (BOOL)rangeEqualsOffset:(int32_t)offset other:(MyLibKotlinByteArray *)other otherOffset:(int32_t)otherOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:other:otherOffset:byteCount:)")));
- (BOOL)rangeEqualsOffset:(int32_t)offset other:(MyLibOkioByteString *)other otherOffset:(int32_t)otherOffset byteCount_:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:other:otherOffset:byteCount_:)")));
- (MyLibOkioByteString *)sha1 __attribute__((swift_name("sha1()")));
- (MyLibOkioByteString *)sha256 __attribute__((swift_name("sha256()")));
- (MyLibOkioByteString *)sha512 __attribute__((swift_name("sha512()")));
- (BOOL)startsWithPrefix:(MyLibKotlinByteArray *)prefix __attribute__((swift_name("startsWith(prefix:)")));
- (BOOL)startsWithPrefix_:(MyLibOkioByteString *)prefix __attribute__((swift_name("startsWith(prefix_:)")));
- (MyLibOkioByteString *)substringBeginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("substring(beginIndex:endIndex:)")));
- (MyLibOkioByteString *)toAsciiLowercase __attribute__((swift_name("toAsciiLowercase()")));
- (MyLibOkioByteString *)toAsciiUppercase __attribute__((swift_name("toAsciiUppercase()")));
- (MyLibKotlinByteArray *)toByteArray __attribute__((swift_name("toByteArray()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)utf8 __attribute__((swift_name("utf8()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("OkioSource")))
@protocol MyLibOkioSource <MyLibOkioCloseable>
@required

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (int64_t)readSink:(MyLibOkioBuffer *)sink byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("read(sink:byteCount:)"))) __attribute__((swift_error(nonnull_error)));
- (MyLibOkioTimeout *)timeout __attribute__((swift_name("timeout()")));
@end

__attribute__((swift_name("OkioBufferedSource")))
@protocol MyLibOkioBufferedSource <MyLibOkioSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (int64_t)indexOfB:(int8_t)b __attribute__((swift_name("indexOf(b:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(b:fromIndex:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex toIndex:(int64_t)toIndex __attribute__((swift_name("indexOf(b:fromIndex:toIndex:)")));
- (int64_t)indexOfBytes:(MyLibOkioByteString *)bytes __attribute__((swift_name("indexOf(bytes:)")));
- (int64_t)indexOfBytes:(MyLibOkioByteString *)bytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(bytes:fromIndex:)")));
- (int64_t)indexOfElementTargetBytes:(MyLibOkioByteString *)targetBytes __attribute__((swift_name("indexOfElement(targetBytes:)")));
- (int64_t)indexOfElementTargetBytes:(MyLibOkioByteString *)targetBytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOfElement(targetBytes:fromIndex:)")));
- (id<MyLibOkioBufferedSource>)peek __attribute__((swift_name("peek_()")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(MyLibOkioByteString *)bytes __attribute__((swift_name("rangeEquals(offset:bytes:)")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(MyLibOkioByteString *)bytes bytesOffset:(int32_t)bytesOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:bytes:bytesOffset:byteCount:)")));
- (int32_t)readSink:(MyLibKotlinByteArray *)sink __attribute__((swift_name("read(sink:)")));
- (int32_t)readSink:(MyLibKotlinByteArray *)sink offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("read(sink:offset:byteCount:)")));
- (int64_t)readAllSink:(id<MyLibOkioSink>)sink __attribute__((swift_name("readAll(sink:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (MyLibKotlinByteArray *)readByteArray __attribute__((swift_name("readByteArray()")));
- (MyLibKotlinByteArray *)readByteArrayByteCount:(int64_t)byteCount __attribute__((swift_name("readByteArray(byteCount:)")));
- (MyLibOkioByteString *)readByteString __attribute__((swift_name("readByteString()")));
- (MyLibOkioByteString *)readByteStringByteCount:(int64_t)byteCount __attribute__((swift_name("readByteString(byteCount:)")));
- (int64_t)readDecimalLong __attribute__((swift_name("readDecimalLong()")));
- (void)readFullySink:(MyLibKotlinByteArray *)sink __attribute__((swift_name("readFully(sink:)")));
- (void)readFullySink:(MyLibOkioBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readFully(sink:byteCount:)")));
- (int64_t)readHexadecimalUnsignedLong __attribute__((swift_name("readHexadecimalUnsignedLong()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int32_t)readIntLe __attribute__((swift_name("readIntLe()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int64_t)readLongLe __attribute__((swift_name("readLongLe()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (int16_t)readShortLe __attribute__((swift_name("readShortLe()")));
- (NSString *)readUtf8 __attribute__((swift_name("readUtf8()")));
- (NSString *)readUtf8ByteCount:(int64_t)byteCount __attribute__((swift_name("readUtf8(byteCount:)")));
- (int32_t)readUtf8CodePoint __attribute__((swift_name("readUtf8CodePoint()")));
- (NSString * _Nullable)readUtf8Line __attribute__((swift_name("readUtf8Line()")));
- (NSString *)readUtf8LineStrict __attribute__((swift_name("readUtf8LineStrict()")));
- (NSString *)readUtf8LineStrictLimit:(int64_t)limit __attribute__((swift_name("readUtf8LineStrict(limit:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (int32_t)selectOptions:(NSArray<MyLibOkioByteString *> *)options __attribute__((swift_name("select(options:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
@property (readonly) MyLibOkioBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioBuffer")))
@interface MyLibOkioBuffer : MyLibBase <MyLibOkioBufferedSource, MyLibOkioBufferedSink>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));
- (int64_t)completeSegmentByteCount __attribute__((swift_name("completeSegmentByteCount()")));
- (MyLibOkioBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (MyLibOkioBuffer *)doCopyToOut:(MyLibOkioBuffer *)out offset:(int64_t)offset __attribute__((swift_name("doCopyTo(out:offset:)")));
- (MyLibOkioBuffer *)doCopyToOut:(MyLibOkioBuffer *)out offset:(int64_t)offset byteCount:(int64_t)byteCount __attribute__((swift_name("doCopyTo(out:offset:byteCount:)")));
- (MyLibOkioBuffer *)emit __attribute__((swift_name("emit()")));
- (MyLibOkioBuffer *)emitCompleteSegments __attribute__((swift_name("emitCompleteSegments()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)flushAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("flush()")));
- (int8_t)getPos:(int64_t)pos __attribute__((swift_name("get(pos:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (MyLibOkioByteString *)hmacSha1Key:(MyLibOkioByteString *)key __attribute__((swift_name("hmacSha1(key:)")));
- (MyLibOkioByteString *)hmacSha256Key:(MyLibOkioByteString *)key __attribute__((swift_name("hmacSha256(key:)")));
- (MyLibOkioByteString *)hmacSha512Key:(MyLibOkioByteString *)key __attribute__((swift_name("hmacSha512(key:)")));
- (int64_t)indexOfB:(int8_t)b __attribute__((swift_name("indexOf(b:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(b:fromIndex:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex toIndex:(int64_t)toIndex __attribute__((swift_name("indexOf(b:fromIndex:toIndex:)")));
- (int64_t)indexOfBytes:(MyLibOkioByteString *)bytes __attribute__((swift_name("indexOf(bytes:)")));
- (int64_t)indexOfBytes:(MyLibOkioByteString *)bytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(bytes:fromIndex:)")));
- (int64_t)indexOfElementTargetBytes:(MyLibOkioByteString *)targetBytes __attribute__((swift_name("indexOfElement(targetBytes:)")));
- (int64_t)indexOfElementTargetBytes:(MyLibOkioByteString *)targetBytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOfElement(targetBytes:fromIndex:)")));
- (MyLibOkioByteString *)md5 __attribute__((swift_name("md5()")));
- (id<MyLibOkioBufferedSource>)peek __attribute__((swift_name("peek_()")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(MyLibOkioByteString *)bytes __attribute__((swift_name("rangeEquals(offset:bytes:)")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(MyLibOkioByteString *)bytes bytesOffset:(int32_t)bytesOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:bytes:bytesOffset:byteCount:)")));
- (int32_t)readSink:(MyLibKotlinByteArray *)sink __attribute__((swift_name("read(sink:)")));
- (int32_t)readSink:(MyLibKotlinByteArray *)sink offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("read(sink:offset:byteCount:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (int64_t)readSink:(MyLibOkioBuffer *)sink byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("read(sink:byteCount:)"))) __attribute__((swift_error(nonnull_error)));
- (int64_t)readAllSink:(id<MyLibOkioSink>)sink __attribute__((swift_name("readAll(sink:)")));
- (MyLibOkioBufferUnsafeCursor *)readAndWriteUnsafeUnsafeCursor:(MyLibOkioBufferUnsafeCursor *)unsafeCursor __attribute__((swift_name("readAndWriteUnsafe(unsafeCursor:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (MyLibKotlinByteArray *)readByteArray __attribute__((swift_name("readByteArray()")));
- (MyLibKotlinByteArray *)readByteArrayByteCount:(int64_t)byteCount __attribute__((swift_name("readByteArray(byteCount:)")));
- (MyLibOkioByteString *)readByteString __attribute__((swift_name("readByteString()")));
- (MyLibOkioByteString *)readByteStringByteCount:(int64_t)byteCount __attribute__((swift_name("readByteString(byteCount:)")));
- (int64_t)readDecimalLong __attribute__((swift_name("readDecimalLong()")));
- (void)readFullySink:(MyLibKotlinByteArray *)sink __attribute__((swift_name("readFully(sink:)")));
- (void)readFullySink:(MyLibOkioBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readFully(sink:byteCount:)")));
- (int64_t)readHexadecimalUnsignedLong __attribute__((swift_name("readHexadecimalUnsignedLong()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int32_t)readIntLe __attribute__((swift_name("readIntLe()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int64_t)readLongLe __attribute__((swift_name("readLongLe()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (int16_t)readShortLe __attribute__((swift_name("readShortLe()")));
- (MyLibOkioBufferUnsafeCursor *)readUnsafeUnsafeCursor:(MyLibOkioBufferUnsafeCursor *)unsafeCursor __attribute__((swift_name("readUnsafe(unsafeCursor:)")));
- (NSString *)readUtf8 __attribute__((swift_name("readUtf8()")));
- (NSString *)readUtf8ByteCount:(int64_t)byteCount __attribute__((swift_name("readUtf8(byteCount:)")));
- (int32_t)readUtf8CodePoint __attribute__((swift_name("readUtf8CodePoint()")));
- (NSString * _Nullable)readUtf8Line __attribute__((swift_name("readUtf8Line()")));
- (NSString *)readUtf8LineStrict __attribute__((swift_name("readUtf8LineStrict()")));
- (NSString *)readUtf8LineStrictLimit:(int64_t)limit __attribute__((swift_name("readUtf8LineStrict(limit:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (int32_t)selectOptions:(NSArray<MyLibOkioByteString *> *)options __attribute__((swift_name("select(options:)")));
- (MyLibOkioByteString *)sha1 __attribute__((swift_name("sha1()")));
- (MyLibOkioByteString *)sha256 __attribute__((swift_name("sha256()")));
- (MyLibOkioByteString *)sha512 __attribute__((swift_name("sha512()")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (MyLibOkioByteString *)snapshot __attribute__((swift_name("snapshot()")));
- (MyLibOkioByteString *)snapshotByteCount:(int32_t)byteCount __attribute__((swift_name("snapshot(byteCount:)")));
- (MyLibOkioTimeout *)timeout __attribute__((swift_name("timeout()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MyLibOkioBuffer *)writeSource:(MyLibKotlinByteArray *)source __attribute__((swift_name("write(source:)")));
- (MyLibOkioBuffer *)writeSource:(MyLibKotlinByteArray *)source offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(source:offset:byteCount:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)writeSource:(MyLibOkioBuffer *)source byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("write(source:byteCount_:)")));
- (MyLibOkioBuffer *)writeByteString:(MyLibOkioByteString *)byteString __attribute__((swift_name("write(byteString:)")));
- (MyLibOkioBuffer *)writeByteString:(MyLibOkioByteString *)byteString offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(byteString:offset:byteCount:)")));
- (MyLibOkioBuffer *)writeSource:(id<MyLibOkioSource>)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (int64_t)writeAllSource:(id<MyLibOkioSource>)source __attribute__((swift_name("writeAll(source:)")));
- (MyLibOkioBuffer *)writeByteB:(int32_t)b __attribute__((swift_name("writeByte(b:)")));
- (MyLibOkioBuffer *)writeDecimalLongV:(int64_t)v __attribute__((swift_name("writeDecimalLong(v:)")));
- (MyLibOkioBuffer *)writeHexadecimalUnsignedLongV:(int64_t)v __attribute__((swift_name("writeHexadecimalUnsignedLong(v:)")));
- (MyLibOkioBuffer *)writeIntI:(int32_t)i __attribute__((swift_name("writeInt(i:)")));
- (MyLibOkioBuffer *)writeIntLeI:(int32_t)i __attribute__((swift_name("writeIntLe(i:)")));
- (MyLibOkioBuffer *)writeLongV:(int64_t)v __attribute__((swift_name("writeLong(v:)")));
- (MyLibOkioBuffer *)writeLongLeV:(int64_t)v __attribute__((swift_name("writeLongLe(v:)")));
- (MyLibOkioBuffer *)writeShortS:(int32_t)s __attribute__((swift_name("writeShort(s:)")));
- (MyLibOkioBuffer *)writeShortLeS:(int32_t)s __attribute__((swift_name("writeShortLe(s:)")));
- (MyLibOkioBuffer *)writeUtf8String:(NSString *)string __attribute__((swift_name("writeUtf8(string:)")));
- (MyLibOkioBuffer *)writeUtf8String:(NSString *)string beginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("writeUtf8(string:beginIndex:endIndex:)")));
- (MyLibOkioBuffer *)writeUtf8CodePointCodePoint:(int32_t)codePoint __attribute__((swift_name("writeUtf8CodePoint(codePoint:)")));
@property (readonly) MyLibOkioBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("OkioTimeout")))
@interface MyLibOkioTimeout : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MyLibOkioTimeoutCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((swift_name("Apollo_apiCustomTypeValue")))
@interface MyLibApollo_apiCustomTypeValue<T> : MyLibBase
@property (class, readonly, getter=companion) MyLibApollo_apiCustomTypeValueCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiDeferredFragmentIdentifier")))
@interface MyLibApollo_apiDeferredFragmentIdentifier : MyLibBase
- (instancetype)initWithPath:(NSArray<id> *)path label:(NSString * _Nullable)label __attribute__((swift_name("init(path:label:)"))) __attribute__((objc_designated_initializer));
- (MyLibApollo_apiDeferredFragmentIdentifier *)doCopyPath:(NSArray<id> *)path label:(NSString * _Nullable)label __attribute__((swift_name("doCopy(path:label:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSArray<id> *path __attribute__((swift_name("path")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface MyLibKotlinByteIterator : MyLibBase <MyLibKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MyLibByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioByteString.Companion")))
@interface MyLibOkioByteStringCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibOkioByteStringCompanion *shared __attribute__((swift_name("shared")));
- (MyLibOkioByteString *)ofData:(MyLibKotlinByteArray *)data __attribute__((swift_name("of(data:)")));
- (MyLibOkioByteString * _Nullable)decodeBase64:(NSString *)receiver __attribute__((swift_name("decodeBase64(_:)")));
- (MyLibOkioByteString *)decodeHex:(NSString *)receiver __attribute__((swift_name("decodeHex(_:)")));
- (MyLibOkioByteString *)encodeUtf8:(NSString *)receiver __attribute__((swift_name("encodeUtf8(_:)")));
- (MyLibOkioByteString *)toByteString:(MyLibKotlinByteArray *)receiver offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("toByteString(_:offset:byteCount:)")));
@property (readonly) MyLibOkioByteString *EMPTY __attribute__((swift_name("EMPTY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioBuffer.UnsafeCursor")))
@interface MyLibOkioBufferUnsafeCursor : MyLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (int64_t)expandBufferMinByteCount:(int32_t)minByteCount __attribute__((swift_name("expandBuffer(minByteCount:)")));
- (int32_t)next __attribute__((swift_name("next()")));
- (int64_t)resizeBufferNewSize:(int64_t)newSize __attribute__((swift_name("resizeBuffer(newSize:)")));
- (int32_t)seekOffset:(int64_t)offset __attribute__((swift_name("seek(offset:)")));
@property MyLibOkioBuffer * _Nullable buffer __attribute__((swift_name("buffer")));
@property MyLibKotlinByteArray * _Nullable data __attribute__((swift_name("data")));
@property int32_t end __attribute__((swift_name("end")));
@property int64_t offset __attribute__((swift_name("offset")));
@property BOOL readWrite __attribute__((swift_name("readWrite")));
@property int32_t start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioTimeout.Companion")))
@interface MyLibOkioTimeoutCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibOkioTimeoutCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MyLibOkioTimeout *NONE __attribute__((swift_name("NONE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomTypeValueCompanion")))
@interface MyLibApollo_apiCustomTypeValueCompanion : MyLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MyLibApollo_apiCustomTypeValueCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (MyLibApollo_apiCustomTypeValue<id> *)fromRawValueValue:(id _Nullable)value __attribute__((swift_name("fromRawValue(value:)")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
